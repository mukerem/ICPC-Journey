# Time: 2022-07-19 15:16:20
# title: Encoded Message
# language: Python 3


for _ in range(int(input())):
    a = input()
    n = len(a)
    n = int(n**0.5)
    x = [[0] * n for i in range(n)]
    k = 0
    for i in range(n):
        for j in range(n):
            x[i][j] = a[k]
            k += 1
    s = ''
    for i in range(n):
        for j in range(n):
            s += x[j][n-i-1]
    print(s)
