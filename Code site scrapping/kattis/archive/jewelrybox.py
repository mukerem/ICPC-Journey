# Time: 2022-08-14 18:40:13
# title: Jewelry Box
# language: Python 3


from math import sqrt
for _ in range(int(input())):
    x, y = map(int, input().split())
    z = x+y
    h1 = z + sqrt(z*z - 3*x*y)
    h2 = z - sqrt(z*z - 3*x*y)
    h1 /= 6
    h2 /= 6
    a1 = x - 2*h1
    a2 = x - 2*h2
    b1 = y - 2*h1
    b2 = y - 2*h2
    v1 = a1*b1*h1
    v2 = a2*b2*h2
    print(max(v1, v2))