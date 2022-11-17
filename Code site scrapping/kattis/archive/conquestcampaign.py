# Time: 2022-08-23 09:29:08
# title: Conquest Campaign
# language: Python 3


r,c,n = map(int, input().split())
a = []
for i in range(n):
    a.append(tuple(map(int, input().split())))
b = []
for i in range(r):
    for j in range(c):
        b.append((i+1, j+1))
for i in a:
    if i in b:
        b.remove(i)
k = 1
while b:
    p = set()
    for i, j in a:
        if i> 1: p.add((i-1, j))
        if i<r: p.add((i+1, j))
        if j>1: p.add((i, j-1))
        if j<c: p.add((i, j+1))
    a = []

    for i in p:
        if i in b:
            b.remove(i)
            a.append(i)
    k += 1
print(k)
        
