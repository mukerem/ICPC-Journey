from math import factorial
for _ in range(int(input())):
    n,m = [int(k) for k in input().split()]
    ans = factorial(n) / factorial(m)
    ans /= factorial(n-m)
    print(int(ans))
