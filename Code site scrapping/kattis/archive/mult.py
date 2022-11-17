# Time: 2022-08-14 17:18:53
# title: Mult!
# language: Python 3


a = []
n = int(input())
for _ in range(n):
    a.append(int(input()))
a.append(0)
x = a[0]
i = 1
while i < n:
    if a[i] % x == 0:
        print(a[i])
        x = a[i+1]
        i += 1
    i += 1
    