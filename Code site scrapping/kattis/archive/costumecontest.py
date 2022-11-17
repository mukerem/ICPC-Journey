# Time: 2022-08-18 16:18:51
# title: Costume Contest
# language: Python 3


n = int(input())
a = {}
for i in range(n):
    b = input()
    if b in a:
        a[b] += 1
    else:
        a[b] = 1
c = [(a[i], i) for i in a]
c.sort()
m = c[0][0]
p = []
for i,j in c:
    if i != m:
        break
    p.append(j)
p.sort()
for i in p:
    print(i)