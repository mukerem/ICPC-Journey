# Time: 2022-08-15 16:44:59
# title: Prva
# language: Python 3


a = []
r, c = map(int, input().split())
for i in range(r):
    a.append(input())
b = []
for i in a:
    s = i.split('#')
    for j in s:
        if not j == ' ' * len(j) and len(j) > 1:
            b.append(j)
        
for i in range(c):
    s = ''
    for j in range(r):
        s += a[j][i]
    s = s.split('#')
    for j in s:
        if not j == ' ' * len(j) and len(j) > 1:
            b.append(j)
b.sort()
print(b[0])