for _ in range(int(input())):
    n,q  = map(int, input().split())
    a = list(map(int, input().split()))
    u = 0
    v = 0
    b = 0
    c = 0
    s = sum(a)
    for i in a:
        if i%2 == 0:
            b += 1
        else:
            c += 1
    for i in range(q):
        x,y = map(int, input().split())
        if x == 0:
            s += y*b
        else:
            s += y*c
        print(s)
        if x == 0:
            if y%2 == 1:
                c += b
                b = 0
        else:
            if y%2 == 1:
                b += c
                c = 0
        #print(s, b, c)
