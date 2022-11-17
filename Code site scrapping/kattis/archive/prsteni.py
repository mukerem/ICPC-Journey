# Time: 2022-08-14 09:30:44
# title: Prsteni
# language: Python 3


from math import gcd
n = int(input())
a = [int(i) for i in input().split()]
for i in range(1, n):
    x = a[0]
    y = a[i]
    z = gcd(x, y)
    x //= z
    y //= z
    print(f'{x}/{y}')