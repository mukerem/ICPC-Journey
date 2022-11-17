# Time: 2022-08-14 10:00:40
# title: ICPC Awards
# language: Python 3


n = int(input())
a = []
for i in range(n):
    a.append(input().split())
b = []
i = 0
while len(b) < 12:
    x, y = a[i]
    if not x in b:
        print(x, y)
        b.append(x)
    i += 1