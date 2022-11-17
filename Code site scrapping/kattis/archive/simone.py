# Time: 2022-08-18 22:12:44
# title: Simone
# language: Python 3


n, m = map(int, input().split())
a = list(map(int, input().split()))
b = set(a)
d = []
for i in range(1, m+1):
    if not i in b:
        d.append(i)
if d:
    d.sort()
else: 
    c = []
    for i in b:
        c.append((a.count(i), i))
    c.sort()
    d = [c[0][1]]
    for i in range(1, len(c)):
        if c[i][0] != c[i-1][0]:
            break
        d.append(c[i][1])
print(len(d))
print(*d)