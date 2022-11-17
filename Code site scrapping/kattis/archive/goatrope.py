# Time: 2022-08-14 20:11:12
# title: Goat Rope
# language: Python 3


x,y,x1,y1,x2,y2 = map(int, input().split())
from math import sqrt
if x1<=x<=x2:
    d1 = min(abs(y2-y), abs(y1-y))
elif y1<=y<=y2:
    d1 = min(abs(x2-x), abs(x1-x))
else:
    d1 = min(
        sqrt((x1-x)**2 + (y1-y)**2),
        sqrt((x1-x)**2 + (y2-y)**2),
        sqrt((x2-x)**2 + (y1-y)**2),
        sqrt((x2-x)**2 + (y2-y)**2),
        )
print(d1)