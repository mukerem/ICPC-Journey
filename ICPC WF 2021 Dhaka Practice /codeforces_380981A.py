for _ in range(int(input())):
    n, m = map(int, input().split())
    a = [int(i) for i in input().split()]
    a.sort(reverse=True)
    s = 2
    d = 0
    
    for i in range(m):
        if s >= n:
            break
        s += a[i] - 1
        d += 1
    if s >= n:
        print(d)
    else:
        print(-1)
