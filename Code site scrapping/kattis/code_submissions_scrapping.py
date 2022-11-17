import requests
from bs4 import BeautifulSoup
  
def auth(username, password):
    auth_url = "https://open.kattis.com/login"
    login = {"user": username, "password": password, "script": "true"}

    response = requests.post(auth_url, data=login)
    print(response.text)
    if response.status_code == 200:
        return response.cookies

    raise Exception("Invalid credintials")

def get_detail(user, link):
    url = f"https://open.kattis.com{link}"
    data = {"script": "true"}
    page = requests.get(url, data=data, cookies=user)
    
    soup = BeautifulSoup(page.text, "html.parser")
    div = soup.find('div', attrs={'class':'file_source-content-file'})
    file_name = div.find('h3').text.strip()
    submission_file_link = div.find('a').get('href')
    url = f"https://open.kattis.com{submission_file_link}"
    code = requests.get(url, data=data, cookies=user)
    return file_name, code.content
    

def get_submission(user, page=0, type='AC'):
    url = f"https://open.kattis.com/users/mukerem?page={page}&status={type}"
    data = {"script": "true"}
    page_content = requests.get(url, data=data, cookies=user)
    soup = BeautifulSoup(page_content.text, "html.parser")

    table = soup.find('table', attrs={'class':'table2 report_grid-problems_table'})
    table_body = table.find('tbody')
    rows = table_body.find_all('tr')
    if not rows:
        return False
    print(f'page {page + 1} contains {len(rows)} submissions')
    duplicate = []
    for row in rows:
        cols = row.find_all('td')
        link = cols[-1].find('a').get('href')
        cols = [ele.text.strip() for ele in cols]
        time = cols[1]
        title = cols[2]
        if title in duplicate:
            continue
        language = cols[5]
        file_name, code = get_detail(user, link)
        header = b""
        if language == "Python 3":
            header += str.encode(f'# Time: {time}\n')
            header += str.encode(f'# title: {title}\n')
            header += str.encode(f'# language: {language}\n\n\n')
            code = header + code
        elif language == "C++":
            header += str.encode(f'// Time: {time}\n')
            header += str.encode(f'// title: {title}\n')
            header += str.encode(f'// language: {language}\n\n\n')
            code = header + code
        open(f"archive/{file_name}", "wb").write(code)
        duplicate.append(title)
    return True

def download_submission(user):
    page = 0
    cont = True
    while cont:
        cont = get_submission(user, page)
        page += 1

username = "mukerem"
password = "*******"
user = auth(username, password)
download_submission(user)
