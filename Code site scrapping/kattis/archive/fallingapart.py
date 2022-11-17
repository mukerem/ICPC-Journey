# Time: 2022-08-17 14:24:02
# title: Falling Apart
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
a.sort(reverse=True)
b = sum(a)
t = 0
for i in range(0, n, 2):
    t += a[i]
print(t, b-t)