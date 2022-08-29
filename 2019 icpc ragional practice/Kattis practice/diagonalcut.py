a,b = [int(i) for i in raw_input().split()]
c = 0
d = 0
while a%2 == 0:
    c += 1
    a /= 2
    
while b%2 == 0:
    d += 1
    b /= 2
ans = min(c, d)
print 2 ** ans
