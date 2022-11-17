# Time: 2022-08-24 22:11:17
# title: Fast Food Prizes
# language: Python 3


for _ in range(int(input())):
    a = {}
    n, m = map(int, input().split())
    c = []
    for i in range(n):
        x = list(map(int, input().split()))
        k = x[0]
        b = x[1:-1]
        p = x[-1]
        c.append((b, p))
    d = list(map(int, input().split()))
    t = 0
    for b, p in c:
        y = []
        for i in b:
            y.append(d[i-1])
        t += p * min(y)
    print(t)