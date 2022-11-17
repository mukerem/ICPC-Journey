# Time: 2021-04-05 21:52:05
# title: Unlock Pattern
# language: Python 3


a = []
for i in range(3):
    s = [int(j) for j in input().split()]
    a.append(s)
b = []
k = 1
for i in range(3):
    for j in range(3):
        b.append((a[i][j], i, j))
b.sort()

from math import sqrt
s = 0
for i in range(8):
    s += sqrt((b[i+1][1] - b[i][1]) ** 2 + (b[i+1][2] - b[i][2]) ** 2 )
print(s)
