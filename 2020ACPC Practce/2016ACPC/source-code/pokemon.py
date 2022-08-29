for _ in range(int(input())):
    a,b,c = [int(i) for i in input().split()]
    f = 1
    if a == 2:f=3
    if a == 3:f=5
        
    d = c - b
    if d < 0:
        ans = 0
    else:
        ans = d * f
    print(ans)
