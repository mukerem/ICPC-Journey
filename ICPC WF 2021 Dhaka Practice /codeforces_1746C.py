for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    x = []
    for i in range(1, n):
        if a[i] < a[i-1]:
            x.append((a[i-1] - a[i], i))
    x.sort()
    #print(x)
    #continue
    k = 1
    for i, j in x:
        while k<=n and i>0:
            print(j+1, end=' ')
            i -= k
            k += 1
    while k<= n:
        print(n, end=' ')
        k += 1
    '''        
    d = 1
    s = 0
    for i in range(n):
        
        while d < n:
            if a[d] >= a[d-1]:
                d += 1
            else:
                break
        if d >= n:
            for j in range(i, n):
                print(n, end=' ')
            break
        s += i+1
        if d<n:a[d] += s
        print(d+1, end=' ')
    '''
    print()
