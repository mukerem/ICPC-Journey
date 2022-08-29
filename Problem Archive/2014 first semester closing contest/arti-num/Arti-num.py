from math import sqrt
for _ in range(int(input())):
    n = int(input())
    b = n
    d = int(sqrt(1 + 8*n))
    c = -1 + d
    c //= 2
    ans = n + c
    if not d*d == 1 + 8*n:
        ans += 1
    print(ans)
        
