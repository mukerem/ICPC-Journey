# Time: 2022-08-26 09:41:17
# title: Coloring Socks
# language: Python 3


s, c, k = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
n = 1
d = 0
f = a[0]
for i in a:
    if d == c:
        n += 1
        d = 1
        f = i
    elif i - f > k:
        n += 1
        d = 1
        f = i
    else:
        d += 1
print(n)
    