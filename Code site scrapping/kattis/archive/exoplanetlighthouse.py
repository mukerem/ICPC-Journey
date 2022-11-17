# Time: 2022-08-26 14:58:15
# title: Exoplanet Lighthouse
# language: Python 3


from math import acos, pi

for _ in range(int(input())):
    r, h1, h2 = map(float, input().split())
    t1 = acos(1000 * r / (1000 * r + h1))
    t2 = acos(1000 * r / (1000 * r + h2))
    t = t1 + t2
    c = r * t
    print(c)
