from math import sqrt, gcd
def prime(n):
    x = int(sqrt(n))
    i = 2
    while i<= x:
        if n%i == 0:
            return False
        i += 1
    return True
base = [2,8,10,16]
for _ in range(int(input())):
    x = input()
    d = {}
    for i in base:
        try:
            d[i] = (int(x, i))
        except:
            pass
        
    tot = len(d)
    c = 0
    for i in d:
        if(prime(d[i])):
            c += 1
    g = gcd(c, tot)
    print("%d/%d" % (c/g, tot/g))
        
