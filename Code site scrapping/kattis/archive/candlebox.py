# Time: 2020-12-15 20:55:35
# title: Candle Box
# language: Python 3


d = int(input())
r = int(input())
t = int(input())
from math import sqrt
c = d - 1
y = sqrt(c *c  + 4*(r+t+9+(d-d*d)//2))
y = int(y)
x = (c + y) //2

a = (x * (x+1))//2 - 6
ans = r - a
print(ans)
