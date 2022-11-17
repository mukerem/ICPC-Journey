# Time: 2022-08-18 21:18:36
# title: Careful Ascent
# language: Python 3


x, y = map(int, input().split())
n = int(input())
#a = [(0, 0, 1)]
a = []
for i in range(n):
    d,e,c = input().split()
    d = int(d)
    e = int(e)
    c = float(c)
    a.append((d,e,c))
a.sort()
h = 1
d = y
t = 0
for i,j,k in a:
    t += k * (j-i)
    d -= (j-i)
t += d
print(x/t)
    