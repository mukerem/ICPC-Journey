# Time: 2022-08-17 22:13:32
# title: Saving For Retirement
# language: Python 3


a,b,c,d,e = map(int, input().split())
s = (b-a) * c
from math import floor
f = (s/e)
f = d + int(floor(f)) + 1
print(f)
