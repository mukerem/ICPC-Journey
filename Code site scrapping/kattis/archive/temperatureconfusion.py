# Time: 2019-11-20 15:31:04
# title: Temperature Confusion
# language: Python 3


a,b = [int(i) for i in input().split('/')]
x = 5*a - 160*b
y = 9*b
from math import gcd
if x<0 and y<0:
    x = abs(x)
    y = abs(y)
elif x>0 and y<0:
    x = -abs(x)
    y = abs(y)
g = gcd(x,y)
print("%d/%d" %(x//g, y//g))
