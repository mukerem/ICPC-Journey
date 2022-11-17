# Time: 2022-08-24 08:51:36
# title: Social running
# language: Python 3


n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
a.append(a[0])
a.append(a[1])

m = 100000
for  i in range(n):
    m = min(m, a[i] + a[i+2])
print(m)