from math import factorial
def catalan(n):
    s = factorial(2*n)//factorial(n+1)
    t = s//factorial(n)
    return t

n = int(input())
cat = [0 for i in range(n+1)]
a = 1
b = 1
c = 1
cat[0] = a//(b*c)
for i in range(1,n+1):
    a *= (2*i)*(2*i-1)
    b,c=c,b
    b *= i*(i+1)
    cat[i] = a//(b*c)
    #print(a,b,c)
ans = 0
for i in range(n//2 + 1):
    ans += cat[i]*cat[n-i]
ans *= 2
if(n%2==0):
    ans -= cat[n//2]*cat[n//2]
print(ans)
#print(cat)
