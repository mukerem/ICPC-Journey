for _ in range(int(input())):
    n,k = map(int, input().split())
    a = [int(i) for i in input().split()]
    b = {}
    for i,v in enumerate(a):
        x = i%k
        if x in b:
            b[x].append(v)
        else:
            b[x] = [v]
    for i in b:
        b[i].sort()
    s = 0
    for i in b:
        d = b[i]
        s += max(d)
    print(s)
    
