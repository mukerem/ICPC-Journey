# Time: 2022-08-17 10:39:07
# title: Half a Cookie
# language: Python 3


from math import pi, sin, acos, sqrt
while 1:
    try:
        r,x,y = map(float, input().split())
        d = x*x + y*y
        if d > r*r:
            print('miss')
            continue
        d = sqrt(d)
        an = 2 * acos(d / r)
        
        b = pi * r * r
        c = r * r * (an - sin(an)) / 2
        b -= c
        print(b, c)
    except:
        break