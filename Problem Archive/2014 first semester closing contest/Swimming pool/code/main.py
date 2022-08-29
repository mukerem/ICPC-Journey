for _ in range(int(input())):
    a,b,v = [int(i) for i in input().split()]
    ans = 4*a*b*b*v*v
    ans = ans ** (1/3.0)
    ans *= 3
    print("%.2f" % ans)
    
