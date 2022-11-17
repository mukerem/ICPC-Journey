# Time: 2022-08-25 23:33:57
# title: Last Minute
# language: Python 3


a,b,c,d = map(int, input().split())
e = c*d

if c > 0:
    e += b
if d > 0:
    e += a
if c ==0 and d == 0:
    e += min(a,b)
print(e)