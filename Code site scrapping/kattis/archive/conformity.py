# Time: 2022-08-15 21:36:18
# title: Conformity
# language: Python 3


n = int(input())
d = {}
for i in range(n):
    a = list(map(int, input().split()))
    a.sort()
    a = tuple(a)
    if a in d:
        d[a] += 1
    else:
        d[a] = 1
c = list(d.values())
a = max(c)
b =  c.count(a) * a
print(b)
