# Time: 2022-08-13 23:24:25
# title: Sum Kind of Problem
# language: Python 3


for  _ in range(int(input())):
    p, n = map(int, input().split())
    a = n * (n+1) // 2
    b = n*n
    c = n*n + n
    print(p, a, b, c)