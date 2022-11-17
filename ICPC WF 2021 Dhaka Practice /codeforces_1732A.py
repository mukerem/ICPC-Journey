for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    t = a[-1]
    from math import gcd
    x = a[0]
    for i in a:
        x =gcd(x, i)
    if x == 1:
        print(0)
        continue
    a[-1] = gcd(a[-1], n)
    x = a[0]
    for i in a:
        x =gcd(x, i)
    if x == 1:
        print(1)
        continue

    a[-1] = t
    
    x = a[0]
    a[-2] = gcd(a[-2], n-1)
    for i in a:
        x =gcd(x, i)
    if x == 1:
        print(2)
        continue
    
    print(3)
