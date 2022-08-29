from math import ceil
for _ in range(int(input())):
    n,k = [int(i) for i in input().split()]
    a = [int(i) for i in input().split()]
    a.sort()
    a.append(a[0] + 360)
    m = 0
    for i in range(n):
        m = max(m, a[i+1] - a[i])
    ans = 360 - m
    ans = int(ceil(ans / k))
    print(ans)
