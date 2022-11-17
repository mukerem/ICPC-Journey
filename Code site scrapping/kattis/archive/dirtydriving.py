# Time: 2022-08-26 11:14:21
# title: Dirty Driving
# language: Python 3


n, p = map(int,  input().split())
a = list(map(int, input().split()))
a.sort()
b = []
idx = 1
for i in a:
    c = idx * p
    idx += 1
    if c > i:
        b.append(c - i)
if not b:
    print(a[0])
else:
    m = max(b)
    print(m + a[0])
