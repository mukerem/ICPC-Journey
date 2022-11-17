# Time: 2022-08-24 15:50:33
# title: No Thanks!
# language: Python 3


n = int(input())
a = [int(i) for i in input().split()]
a.sort()
b = a[0]
for i in range(1, n):
    if a[i] == a[i-1] + 1:
        continue
    b += a[i]
print(b)
