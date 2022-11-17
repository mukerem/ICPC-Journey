# Time: 2022-08-23 14:24:07
# title: Best Compromise
# language: Python 3


for _ in range(int(input())):
    a = []
    n, m = map(int, input().split())
    for i in range(n):
        a.append(input())
    s = ''
    for i in range(m):
        x = 0
        y = 0
        for j in range(n):
            if a[j][i] == '0': x += 1
            else: y += 1
        if x >= y:
            s += '0'
        else:
            s += '1'
    print(s)