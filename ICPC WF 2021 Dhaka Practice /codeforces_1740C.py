import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    #c = a[-1] - a[0]
    #c += max(a[1] - a[0], a[-1] - a[-2])
    #print(c)
    # w1, w2, w3
    # w1, w3, w2
    # w2, w1, w3
    
    c = 0
    #c = max(c, a[-1] - a[-3])
    #c = max(c, a[-1] - a[0])
    #c = max(c, a[2] - a[0])
    c = max(c, a[-1] - a[-3] + a[-1] - a[-2])
    c = max(c, a[-1] - a[0] + a[-1] - a[-2])
    c = max(c, a[2] - a[0] + a[2] - a[1])
    c = max(c, a[-1] - a[-3] + a[-2] - a[-3])
    c = max(c, a[-1] - a[0] + a[1] - a[0])
    c = max(c, a[2] - a[0] + a[1] - a[0])
    for i in range(2, n):
        x = a[i] - a[i-1] + a[i] - a[i-2]
        c=  max(x, c)
        c = max(c, a[i] - a[i-1] + a[i] - a[0])
    for i in range(n-2):
        x = a[i+1] - a[i] + a[i+2] - a[i]
        c=  max(x, c)
        c = max(c, a[i+1] - a[i] + a[-1] - a[i])
    
    print(c)
    
