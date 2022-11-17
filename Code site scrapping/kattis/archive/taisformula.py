# Time: 2022-08-13 23:14:43
# title: Tai's formula
# language: Python 3


a = 0
n = int(input())
b = []
for i in range(n):
    x, t = map(float, input().split())
    b.append((x, t))
for i in range(n-1):
    a += (b[i][1] + b[i+1][1])* (b[i+1][0] - b[i][0]) / 2
print(a/1000)