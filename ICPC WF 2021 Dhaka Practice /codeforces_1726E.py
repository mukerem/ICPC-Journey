from math import comb
    
for _ in range(int(input())):
    n = int(input())
    if n == 1:
        print(1)
        continue
    a = [0 for i in range(n+1)]
    a[2] = 1
    s = 1
    M = 998244353
    for i in range(3, n+1):
        d = 0
        for j in range(2, i):
            d += (comb(i, j) * (a[j])) % M
            d = d%M
        a[i] = d
    print(a[n] + 1)

