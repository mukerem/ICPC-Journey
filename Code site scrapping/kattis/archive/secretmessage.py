# Time: 2022-08-16 16:41:45
# title: Secret Message
# language: Python 3


from math import ceil
for  _ in range(int(input())):
    s = input()
    l = len(s)
    n = l ** 0.5
    n = int(ceil(n))
    m = n*n
    a = [['*' for i in range(n)] for j in range(n)]
    r = 0
    c = 0
    for i in range(l):
        if c == n:
            r += 1
            c = 0
        a[r][c] = s[i]
        c += 1
    b = ''
    for i in range(n):
        for j in range(n):
            if a[n-1-j][i] != '*':
                b += a[n-1-j][i]
    print(b)