# Time: 2022-08-14 11:38:34
# title: Estimating the Area of a Circle
# language: Python 3


from math import pi
while 1:
    r, m, c = map(float, input().split())
    if r+m+c == 0:
        break
    a = pi * r * r
    s = 4 * r * r
    b  =c * s / m
    print(a, b)