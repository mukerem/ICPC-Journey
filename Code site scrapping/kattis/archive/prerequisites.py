# Time: 2022-08-18 09:13:39
# title: Prerequisites?
# language: Python 3


while 1:
    a = input()
    if a == '0':
        break
    k, m = map(int, a.split())
    a = input().split()
    b = []
    c = True
    for i in range(m):
        x = input().split()
        f = int(x[0])
        r = int(x[1])
        y = x[2:]
        d = 0
        for j in y:
            if j in a:
                d += 1
        if d < r:
            c = False
    if c == True:
        print('yes')
    else:
        print('no')