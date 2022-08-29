from math import sqrt
x = input()
ans = 0
n = int(sqrt(x))
for i in range(1,n+1):
    if x%i == 0:
        ans += 1

ans *= 2
if n*n == x:
    ans -= 1
print ans
        
