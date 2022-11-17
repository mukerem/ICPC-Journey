# Time: 2022-08-26 21:49:37
# title: Busy Schedule
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    a = []
    for i in range(n):
        s = input()
        x, y = s.split()
        u, v = map(int, x.split(':'))
        if u == 12:
            u = 0
        if y == 'a.m.':
            a.append(u*60 + v)
        else:
            a.append(u*60 + 720 + v)
    a.sort()
    for i in a:
        u = i // 60
        v = i%60
        if i < 720:
            if u == 0:
                u=12
            print(str(u)+':'+str(v).zfill(2) + ' a.m.')
        else:
            u -= 12
            if u == 0:
                u=12
            print(str(u)+':'+str(v).zfill(2) + ' p.m.')
    print()
