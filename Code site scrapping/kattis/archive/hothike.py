# Time: 2022-08-22 09:03:21
# title: Hot Hike
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
idx = -1
m = 100
for i in range(n-2):
    k = max(a[i], a[i+2])
    if k < m:
        m = k
        idx = i
print(idx+1, m)