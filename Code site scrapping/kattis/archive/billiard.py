# Time: 2022-08-16 12:14:53
# title: Billiard
# language: Python 3


from math import *
while 1:
    a,b,c,d,e = map(int, input().split())
    if a+b+c+d+e == 0:break
    
    an = atan(e*b/(a*d))
    v = e*b / c / sin(an)
    an = an*180/pi
    print('%.2f %.2f' % (an, v))
    
    
