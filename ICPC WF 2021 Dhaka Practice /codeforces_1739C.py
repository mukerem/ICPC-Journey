from math import comb
def win(n):
    s = 0
    d = n//2
    a = 1
    b = 0
    for i in range(1, d):
        #a = i
        #b = i-1
        c = n-a-b
        if c<=0 or d-a<=0:
            break
        
        k = comb(c, d-a)
        print(a,b,c,k)
        s += k
        a += 2
        b += 1
    return s
    
for _ in range(int(input())):
    n = int(input())
    x = comb(n, n//2)-1
    y = win(n)
    z = x-y
    #print(n, x, y)
    print(y%998244353, z%998244353, 1)
