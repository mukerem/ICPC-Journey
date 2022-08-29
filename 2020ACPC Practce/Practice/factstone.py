from math import log10, floor
while True:
    x = int(input())
    if x == 0:
        break
    a = (x//10)*10
    a = (a - 1940)//10
    
    b = pow(2, a)
    c = b * log10(2) + 1
    c =  int(c)
    
    if b < 64:
        c = pow(2, b)
        k = 1
        x = 1
        t = 2
        while x<c:
            x *= t
            t += 1
        t -= 2
        print(t)
    else:
        s = 0
        i = 1
        while 1:
            s += log10(i)
            if floor(s) + 1 == c:
                n = i - 1
            elif floor(s) + 1 > c:
                n = i - 1
                break
            i += 1
            
        print(n)
