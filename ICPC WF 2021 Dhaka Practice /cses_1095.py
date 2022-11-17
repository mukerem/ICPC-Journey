mod = int(1e9) + 7
def power(r, n):
    if n == 0:
        return 1
    if n%2 == 0:
        v = power(r, n//2)
        return v*v % mod
    else:
        return (power(r, n-1) * r) % mod
    
for _ in range(int(input())):
    a,b = map(int, input().split())
    if a+b == 0:
        print(1)
    else:
        print(power(a,b))
        
