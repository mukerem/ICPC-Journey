for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = []
    d = []
    for i in range(n):
        if a[i] == 1:
            c.append(b[i])
        else:
            d.append(b[i])
    
    c.sort(reverse=True)
    d.sort(reverse=True)
    if len(c) < len(d):
        c,d = d,c
    k = len(d)
    m = len(c)
    if k+m == 1:
        print(b[0])
        continue
    
    if k == m:
        s = sum(b) * 2
        s -= min(c[-1], d[-1])
    else:
        s = c[-1]
        for i in range(k):
            s += 2 * (c[i] + d[i])
        s += sum(c[k:-1])
    print(s)
