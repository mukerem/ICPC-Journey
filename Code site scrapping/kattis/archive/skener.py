# Time: 2022-08-14 15:49:08
# title: Skener
# language: Python 3


r,c,zr,zc = map(int, input().split())
a = []
for i in range(r):
    a.append(input())
for i in range(r):
    b = ''
    for j in range(c):
        b += a[i][j] * zc
    for j in range(zr):
        print(b)

        