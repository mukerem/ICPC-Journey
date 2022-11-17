import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    r = n-k+1
    c = (a[0] + r-1) // r
    for i in range(k-1):
        d = a[i+1]-a[i]
        if d < c:
            print('NO')
            break
        c = d
    else:
        print('YES')
