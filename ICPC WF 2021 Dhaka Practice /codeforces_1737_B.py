from math import sqrt
def lux(n):
    '''
    for i in range(1, n+1):
        if i % int(i**0.5) == 0:
            print(i)
    return
    '''
    s = int(sqrt(n))
    if (s+1)**2 == n:
        s += 1
    t = s-1
    u = s+1
    ans = t*3 + 1
    
    k = u*u - 1
    if s*s + s <= n:ans+=1
    if k == n:ans+=1
    #print(n, ans)
    return ans
for i in range(int(input())):
    a,b = map(int, input().split())
    print(lux(b) - lux(a-1))
