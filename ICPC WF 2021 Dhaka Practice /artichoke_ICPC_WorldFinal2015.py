from math import *
p,a,b,c,d,n = map(int, input().split())
x = []

for k in range(1, n+1):
    u = a*k + b
    v = c*k + d
    price = p * (sin(u) + cos(v) + 2.0)
    x.append(price)
#print(x)
z = 0
ans = 0
for i in x:
    z = max(z, i)
    ans = max(ans, z-i)
print(ans)
