import psycopg2
import random
import os
import shutil


con = psycopg2.connect(
    host="127.0.0.1",
    database="main_icpc",
    user="postgres",
    password="andalus"
)

def get_random_color():
	random_number = random.randint(0,16777215)
	hex_number = str(hex(random_number))
	hex_number ='#'+ hex_number[2:]

	return hex_number

def get_info(name, short_name, time_limit):
	cl = get_random_color()
	s = f"title={name}\nshort_name={short_name}\ntime_limit={time_limit}\nballon={cl}"

	return s



stmt = 'SELECT title, short_name, pdf, time_limit, id FROM problem_problem'
cur = con.cursor()

_DIR = "/home/icpc/MainBackend/upload_file/"


cur.execute(stmt)
while True:
    row = cur.fetchone()
    if row == None:
        break
    name = row[0]
    short_name = row[1]
    time_limit = int(row[3])
    info = get_info(name, short_name, time_limit)

    _testcase = []

    _id = row[4]
    tc_stmt = 'SELECT input, output FROM problem_testcase WHERE problem_id=%d' % _id

    cur2 = con.cursor()
    cur2.execute(tc_stmt)
    while True:
    	row2 = cur2.fetchone()
    	if row2 == None:
    		break 
    	_testcase.append(list(map(lambda x:_DIR+x, row2)))
    

    pdf_path = _DIR + row[2]


    curr_dir = f"B/{name}/" 
    sec_dir =  curr_dir+'secret/'
    os.mkdir(curr_dir)
    os.mkdir(sec_dir)
    shutil.copy(pdf_path, curr_dir)
    for i, o in _testcase:
	    shutil.copy(i, sec_dir)
	    shutil.copy(o, sec_dir)
    with open(curr_dir+"info.ini", "w") as f:
        print(get_info(name, short_name, time_limit), file=f)
    shutil.make_archive(_name, 'zip', curr_dir)
    # print(path)
