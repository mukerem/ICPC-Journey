while True:
    n = input()
    if n == 0:
        break
    s = []
    k = 0
    n -= 1
    while n:
        a = n&1
        if a:
            s.append(3 ** k)
        k += 1
        n = n>>1
    ans = ", ".join([str(i) for i in s])
    print "{ %s }"%ans
        
