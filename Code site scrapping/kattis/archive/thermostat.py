# Time: 2019-11-19 14:08:15
# title: Thermostat Trouble
# language: Python 3


from math import gcd
def xcal(a,b, y):
    c = 100 * (y-a)
    if b<a:
        return (-c, a-b)
    return (c, b-a)
def ycal(a, b, num, den):
    c = (b-a) * num + 100 * a * den
    return (c, 100 * den)

n,q = [int(i) for i in input().split()]
s = []
for i in range(n):
    a,b = [int(k) for k in input().split()]
    s.append((a,b))
for i in range(q):
    ind1, ind2, val = [int(k) for k in input().split()]
    ind1 -= 1
    ind2 -= 1
    num, den = xcal(s[ind1][0], s[ind1][1], val)
    numerator, denominator = ycal(s[ind2][0], s[ind2][1], num, den)
    g = gcd(numerator, denominator)
    print("%d/%d" % (numerator/g, denominator/g))
