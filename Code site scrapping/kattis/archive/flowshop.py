# Time: 2022-08-26 20:53:33
# title: Flow Shop
# language: Python 3


n , m = map(int, input().split())
a = []
for i in range(n):
    d = list(map(int, input().split()))
    a.append(d)
b = [0 for i in range(m)]
for ix, i in enumerate(a):
    k = b[0]
    for idx, j in enumerate(i):
        k = max(k, b[idx]) + j
        b[idx] = k
    print(k, end = ' ')