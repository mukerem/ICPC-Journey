# Time: 2022-08-23 13:05:27
# title: Charting Progress
# language: Python 3


a = []

def graph(a):
    b = []
    for i in a:
        b.append(i.count('*'))
    c = 0
    m = len(a[0])
    for i in b:
        f = '.' * c + '*' * i + '.' * (m-c-i)
        f = f[::-1]
        print(f)
        c += i
    print()
        
while 1:
    try:
        b = input()
        if b == '':
            graph(a)
            a = []
        else:
            a.append(b)
            
    except:
        break
graph(a)
