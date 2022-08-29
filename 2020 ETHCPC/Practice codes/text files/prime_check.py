from math import *
def prime(n):
    x = int(sqrt(n)) + 1
    if n<2:
        return False
    for i in range(2, x):
        if n%i == 0:
            return False
    return True

b = [0]
c = []
for i in range(2,50):
    if prime(i):
        c.append(i)
print c
for i in c:
    a = int(pow(2, i))
    s = prime(a-1)
    b.append((i, a-1,s))
    
for i in b:
    print i
