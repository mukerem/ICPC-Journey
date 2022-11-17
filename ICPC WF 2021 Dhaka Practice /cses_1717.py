'''
n = int(input())
mod = 1000000007
b = pow(n-1, 2, mod)
print(b)
'''
'''
def c(n):
    from itertools import permutations
    a = permutations([i for i in range(1, n+1)])
    k = 1
    d = 0
    for i in list(a):
        for idx, j in enumerate(i):
            if idx+1 == j:
                break
        else:
            d += 1
    return d
for i in range(1, 10):
    print("%d -> %d" % (i, c(i)))
        
'''
mod = 1000000007
a = [1,1] # a(n) = n*a(n-1) + (n-1)*a(n-2)
n = int(input())
for i in range(2,n-1):
    b = i*a[-1] + (i-1)*a[-2]
    a.append(b%mod)
c = (n-1) * a[-1] % mod
print(c)
#print(a)
