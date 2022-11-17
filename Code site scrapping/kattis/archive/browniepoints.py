# Time: 2022-08-26 21:41:33
# title: Brownie Points I
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    a = []
    for i in range(n):
        x,y = map(int, input().split())
        a.append([x, y])
    u, v = a[n // 2]
    for i in range(n):
        a[i][0] -= u
        a[i][1] -= v
    x = 0
    y = 0
    for i,j in a:
        if i*j > 0:
            x += 1
        elif i*j < 0:
            y += 1
    print(x, y)