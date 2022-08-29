from math import ceil, floor
for _ in range(int(input())):
    a,b,m = [float(i) for i in input().split()]
    l = abs(a-b) + 1
    r = a+b - 1
    l = int(floor(l))
    r = int(ceil(r))
    m = int(m)
    if r <= m:
        print(l,r)
    elif l<= m:
        print(l,m)
    else:
        print(-1)
    
        
