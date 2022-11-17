n = int(input())
a = 0
for d in range(2, n):
    x = n
    while x:
        r = x%d
        x //= d
        a+= r
b = n-2
from math import gcd
g = gcd(b, a)
a //= g
b //= g
print(f'{a}/{b}')


n, d = map(int, input().split())
a = list(map(int, input().split()))
s = 0
for i in range(1, n):
    k = a[i] - a[i-1]
    if k > 0:
        continue
    k = -k
    k += 1
    r = (k+d-1) // d
    a[i] += r*d
    s += r
print(s)
'''
ICPC world final
Python and django
Masters in data science
2 years experience
'''
