# Time: 2022-08-18 20:26:20
# title: Charged
# language: Python 3


n, m, q = map(int, input().split())
a = []
ans = [['.' for i in range(m+1)] for j in range(n+1)]
for i in range(q):
    x,y,z = input().split()
    x = int(x)
    y = int(y)
    ans[x][y] = z
    z = int(z+'1')
    a.append((x,y,z))
from math import sqrt, pi
def charge(x,y):
    t = 0
    for z,w,k in a:
        t += k / sqrt((x-z)**2 + (y-w) ** 2)
    return t
for i in  range(1, n+1):
    for j in range(1, m+1):
        if ans[i][j] == '+' or ans[i][j] == '-':
            continue
        q = charge(i, j)
        c = '.'
        if q > 0:
            if q > (1/pi):
                c = '0'
            elif q > (1/(pi*pi)):
                c = 'O'
            elif q > (1/(pi*pi*pi)):
                c = 'o'
        else:
            q = abs(q)
            if q > (1/pi):
                c = '%'
            elif q > (1/(pi*pi)):
                c = 'X'
            elif q > (1/(pi*pi*pi)):
                c = 'x'
        ans[i][j] = c


for i in range(1, n+1):
    s = ''
    for j in range(1, m+1):
        s += ans[j][i]
    print(s)
