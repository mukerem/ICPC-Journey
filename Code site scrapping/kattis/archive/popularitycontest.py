# Time: 2022-08-15 16:53:57
# title: Popularity Contest
# language: Python 3


n, m = map(int, input().split())
a = [i for i in range(1, n+1)]
p = [0 for i in range(n)]
for i in range(m):
    x, y = map(int, input().split())
    p[x-1] += 1
    p[y-1] += 1
for i in range(n):
    print(p[i] - a[i], end = ' ')