# Time: 2022-08-15 09:52:01
# title: Zoom
# language: Python 3


n, k = map(int, input().split())
a = list(map(int, input().split()))
for i in range(k-1, n, k):
    print(a[i], end= ' ')