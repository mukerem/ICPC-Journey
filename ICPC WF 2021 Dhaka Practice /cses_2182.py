n = int(input())
a = {}
mod = 1000000007
num = 1
for i in range(n):
    x,y = map(int, input().split())
    a[x] = y
    num *= pow(x, y, mod)
    num %= mod
    

b = 1
c = 1
d = 1
for i, j in a.items():
    b *= (j+1)
    b = b%mod
    d *= ((pow(i, j+1, mod) - 1) // (i-1))
    d = d%mod
print(b)
if b%2 == 0:
    c1= pow(num, b, mod)
    c2= 500000004 #pow(2, mod-2, mod)
    c = c1*c2 % mod
else:
    c = pow(num, b//2, mod)
    c = c * int(num**.5)
    c= c%mod


print(b,d,c)
