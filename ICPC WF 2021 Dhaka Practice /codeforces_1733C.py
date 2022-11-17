for _ in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    
    if (a[0] + a[-1]) %2==0:
        print(n-1)
        d = a[-1]
        for i in range(n-2,-1,-1):
            if (d + a[i]) % 2 == 0:
                print(i+1, n)
                
        for i in range(1, n):
            if (d + a[i]) % 2 == 1:
                print(1, i+1)
    else:
        v = [False for i in range(n)]
        print(n-1)
        d = a[0]
        v[0]=True
        for i in range(1,n):
            if (d + a[i]) % 2 == 1:
                print(1, i+1)
                v[i] = True
                
        for i in range(n-2,-1,-1):
            if not v[i] and (d + a[i]) % 2 == 0:
                print(i+1, n)
