# Time: 2022-08-13 23:39:03
# title: Speeding
# language: Python 3


n = int(input())

c = 0
s = 0
tt, dd = map(int, input().split())
for i in range(n-1):
    t, d = map(int, input().split())
    c = max((d - dd) // (t - tt), c)
    tt = t
    dd = d
print(c)