# Time: 2022-08-19 13:43:05
# title: Locust Locus
# language: Python 3


a = []
from math import gcd
for i in range(int(input())):
    y, c1, c2 = map(int, input().split())
    d = gcd(c1, c2)
    e = c1 * c2 // d
    a.append(y + e)
print(min(a))