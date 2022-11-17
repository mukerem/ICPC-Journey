# Time: 2022-08-16 23:47:15
# title: Jabuke
# language: Python 3


xa, ya = map(int, input().split())
xb, yb = map(int, input().split())
xc, yc = map(int, input().split())

area = xa*(yb-yc) + xb*(yc-ya) + xc*(ya-yb)
area /= 2
area = abs(area)

n = int(input())
count = 0
def angle(u,v,w,x):
    from math import acos, sqrt, pi
    an = u*w + v*x
    d1 = sqrt(u*u+v*v)
    d2 = sqrt(w*w+x*x)

    
    an = an / (d1*d2)
    if not -1 <= an <= 1:
        return 180
    an = acos(an) * 180 / pi
    return an
    
for i in range(n):
    x, y = map(int, input().split())
    v1x = -x + xa 
    v1y = -y + ya
    
    v2x = -x + xb
    v2y = -y + yb
    
    v3x = -x + xc
    v3y = -y + yc 

    if abs(v1x) + abs(v1y) == 0 or abs(v2x) + abs(v2y) == 0 or abs(v3x) + abs(v3y) == 0:
        count += 1
        continue
    
    a1 = angle(v1x, v1y, v2x, v2y)
    a2 = angle(v2x, v2y, v3x, v3y)
    a3 = angle(v3x, v3y, v1x, v1y)
    if (abs(a1-180) <= 1e-3 or abs(a1) <= 1e-3 )and min(xa, xb) <= x <= max(xa, xb)\
        and min(ya, yb) <= y <= max(ya, yb):
        count += 1
        continue
    if (abs(a2-180) <= 1e-3 or abs(a2) <= 1e-3) and min(xc, xb) <= x <= max(xc, xb)\
        and min(yc, yb) <= y <= max(yc, yb):
        count += 1
        continue
    if (abs(a3-180) <= 1e-3 or abs(a3) <= 1e-3) and min(xc, xa) <= x <= max(xc, xa)\
        and min(yc, ya) <= y <= max(yc, ya):
        count += 1
        continue

    if abs(a1 + a2 + a3 - 360) <= 1e-3:
        count += 1
print('%.1f' % area)
print(count)
