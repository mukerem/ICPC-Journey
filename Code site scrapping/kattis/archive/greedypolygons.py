# Time: 2022-08-14 19:59:33
# title: Greedy Polygons
# language: Python 3


from math import *
for _ in range(int(input())):
    n, s, d, g = map(int, input().split())
    ap = s / (2 * tan(pi/n))
    p = s*n
    area = p * ap / 2
    area2 = s * d * g * n
    area3 = (d*g) ** 2 * pi #* (n-2) / 2
    print(area + area2 + area3)