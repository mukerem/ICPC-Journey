# Time: 2022-08-18 16:32:33
# title: Completing the Square
# language: Python 3


x0,y0 = map(int, input().split())
x1,y1 = map(int, input().split())
x2,y2 = map(int, input().split())

u,v = x1-x0, y1-y0
r,s = x2-x0, y2-y0

if (u*r + v*s == 0):
    x0, x1 =x1, x0
    y0, y1 = y1, y0

u,v = x1-x2, y1-y2
r,s = x2-x0, y2-y0

if (u*r + v*s == 0):
    x2, x1 =x1, x2
    y2, y1 = y1, y2


px = (x0+x2)/2
py = (y0+y2)/2

vx = px - x1
vy = py - y1

x = px + vx
y = py + vy
print(int(x), int(y))
