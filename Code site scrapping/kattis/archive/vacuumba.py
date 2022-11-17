# Time: 2022-08-16 15:40:54
# title: Vacuumba
# language: Python 3


from math import *
for  _ in range(int(input())):
    n = int(input())
    x = 0
    y = 0
    a = 90
    for i in range(n):
        u, v = map(float, input().split())
        a += u
        x += cos(a*pi/180) * v
        y += sin(a*pi/180) * v
    print(x, y)