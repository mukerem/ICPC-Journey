from math import log2
while 1:
    a = int(input())
    c = a
    if a == 0:
        break
    b = int(log2(a))
    a -= pow(2, b)
    if a == 0:
        a = c
    else: a *= 2
    print(a)
    
