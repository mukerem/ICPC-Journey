while 1:
    try:
        k = input()
        x = []
        for a in range(k+1, 2*k+1):
            if (a * k) % (a-k) == 0:
                b = (a * k) / (a-k)
                x.append((b, a))
        print len(x)
        for a,b in x:
            print ("1/%d = 1/%d + 1/%d" % (k, a, b))
    except EOFError:
        break
