# Time: 2022-08-25 21:42:32
# title: Sky Islands
# language: Python 3


a = {}
n, m = map(int, input().split())
for i in range(1, n+1):
    a[i] = i

for i in range(m):
    x, y = map(int, input().split())
    while x != a[x]:
        x = a[x]
    while y!= a[y]:
        y = a[y]
    a[x] = y
b = set()
for i in a:
    x = i
    while x != a[x]:
        x = a[x]
    b.add(x)
if len(b) == 1:
    print('YES')
else:
    print('NO')