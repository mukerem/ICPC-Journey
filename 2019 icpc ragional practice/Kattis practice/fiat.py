m = 1000000007
n = int(input())
a = 1
b = 1
c = 1
for i in range(1,n+1):
    a *= (2*i)*(2*i-1)
    b,c=c,b
    b *= i*(i+1)

    if b%m:
        b %= m
    if c%m:
        c %= m
    #if a >= (b*c)**4 and a%m:
        #a %= m
    #print(a,b,c)
ans = a//(b*c)
ans %= m
print(ans)

