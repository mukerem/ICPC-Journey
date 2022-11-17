# Time: 2022-08-13 20:18:22
# title: Relocation
# language: Python 3


n,q = map(int, input().split())
a = [int(i) for i in input().split()]
d = {}
for i in range(1, n+1):
    d[i] = a[i-1]
for i in range(q):
    b, c, x = map(int, input().split())
    if b == 1:
        d[c] = x
    else:
        print(abs(d[c] - d[x]))