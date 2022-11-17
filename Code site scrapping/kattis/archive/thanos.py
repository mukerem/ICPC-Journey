for _ in range(input()):
    p,r,f = [int(i) for i in raw_input().split()]
    c = 0
    while f>=p:
        p = p*r
        c += 1
    print c