# Time: 2022-08-18 16:03:15
# title: Election Paradox
# language: Python 3


n = int(input())
a = [int(i) for i in input().split()]
a.sort(reverse=True)
t = 0
for i in range(n):
    if i < n // 2:
        t += a[i]
    else:
        t += a[i]//2
print(t)