from math import gcd
from decimal import *
while True:
    x = input()
    if x == "0":
        break
    d = x[2:-3]
    t = d[::-1]
    rep = 1
    non = 0
    for i in range(len(t)-1):
        if t[i]!= t[i+1]:
            break
        rep += 1
    getcontext().prec = 1000
    d = Decimal('0.' + d)
    non = len(t) - rep
    num = int((10**(non+rep) * d)) - int(10**(non) * d)
    den = int((10**(non+rep)) - (10**(non)))
    
    gcddd = gcd(num, den)
    #print(d, rep, non, num, den)
    print("%d/%d" %(num/gcddd, den/gcddd))
    
