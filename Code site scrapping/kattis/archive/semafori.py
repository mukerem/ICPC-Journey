# Time: 2022-08-17 21:57:12
# title: Semafori
# language: Python 3


n, l = map(int, input().split())
t = 0
b = 0
for i in range(n):
    d,r,g = map(int, input().split())
    t += (d-b)
    k = r+g
    x = t%k
    if x<r:
        t += (r-x)
    b = d
t += (l-b)
print(t)
