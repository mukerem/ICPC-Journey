for  _ in range(int(input())):
    n = int(input())
    s = list(map(int, input().split()))
    if n%2 == 1:
        print(-1)
        continue
    x = s.count(1)
    y = n - x
    z = abs(x - y)
    if z == 0:
        print(n)
        for i in range(n):
            print(i+1, i+1)
        continue
    if x == 0 or y == 0:
        print(1)
        print(1, n)
        continue
    if x < y:
        for i in range(n):
            s[i] *= -1
        x, y = y, x
    t = 2 * y + z // 2
    a = []
    u = 0
    while z and u < n-1:
        while u<n-1 and s[u] + s[u+1] < 2:
            u += 1
        if u >= n-1:
            break
        a.append((u, u+1))
        u += 2
        z -= 2
    if z:
        print(-1)
        continue
    print(t)
    b = [False]*n
    #print(a)
    for i,j in a:
        b[i] = True
        b[j] = True
    i = 0
    while i<n:
        if b[i] == True:
            print(i+1, i+2)
            i += 2
        else:
            print(i+1, i+1)
            i += 1
    
        
        
