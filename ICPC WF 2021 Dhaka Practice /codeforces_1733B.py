for _ in range(int(input())):
    n,x,y = map(int, input().split())
    if x > 0 and y>0 or x+y == 0:
        print(-1)
        continue
    d = max(x, y)
    if (n-1) % d != 0:
        print(-1)
        continue
    s = 2
    for i in range(n-1):
        if i>0 and i%d == 0:
            s += d
        print(s, end= ' ')
    print()
