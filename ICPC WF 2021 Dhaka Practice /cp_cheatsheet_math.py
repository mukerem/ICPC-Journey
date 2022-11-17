def euclid(a, b):
    if b == 0:
        return a
    return euclid(b, a%b)

print(euclid(10, 3))
print(euclid(18, 6))

def power(r, n):
    if n == 0:
        return 1
    if n%2 == 0:
        x = power(r, n//2)
        return x*x
    else:
        return r * power(r, n-1)

print(power(2, 5))
print(power(3, 4))

def powermod(r, n, m):
    if n == 0:
        return 1%m
    if n%2 == 0:
        x = powermod(r, n//2, m)
        return (x*x)%m
    else:
        return (r*powermod(r, n-1, m)) % m

print(powermod(2, 5, 10))
print(powermod(3, 4, 10))

#x = y1
#y = y1 - (a//b) * x1
def extendedeuclid(a, b):
    if b == 0:
        return a, 1, 0
    g, x1, y1 = extendedeuclid(b, a%b)
    x = y1
    y = x1 - (a//b) * y1
    return g, x, y

# x = x0 + (b/g)n, y = y0 − (a/g)n
print(extendedeuclid(7, 4))
print(extendedeuclid(10, 6))
print(extendedeuclid(8, 29))

# Derangement (DP) formula instead: An = (n − 1) × (An−1 + An−2 )
# 1 0 1 2 9 44 265 ... 
