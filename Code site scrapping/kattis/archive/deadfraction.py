# Time: 2021-01-11 11:04:55
# title: Dead Fraction
# language: Python 3


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
    '''
    for i in range(len(t)-1):
        if t[i]!= t[i+1]:
            break
        rep += 1
    rep = 1
    for i in range(len(d)//2, 0, -1):
        if d[-i:] == d[-2*i:-i]:
            rep = i
            break
    '''
    ans = []
    #getcontext().prec = 1000
    d = Decimal('0.' + d)
    #d = float('0.' + d)
    l = len(t)
    for i in range(1, l+1):
        rep = i
        non = l - rep
        num = int((10**(non+rep) * d)) - int(10**(non) * d)
        den = int((10**(non+rep)) - (10**(non)))
        
        gcddd = gcd(num, den)
        ans.append(((den/gcddd, num/gcddd)))
    ans.sort()
    #print(d, rep, non, num, den)
    print("%d/%d" %(ans[0][1],ans[0][0]))
    
