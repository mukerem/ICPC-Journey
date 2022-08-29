while True:
    try:
        a = [int(i) for i in raw_input().split()]
        a.sort()
        dif = a[-1] - a[0]
        b = {i:0 for i in range(1, dif + 1)}
        case = False
        for i in range(len(a)):
            if not case:
                for j in range(i + 1, len(a)):
                    x = a[j] - a[i]
                    if b[x] == 0:
                        b[x] = 1
                    elif b[x] == 1:
                        print 'not a ruler'
                        case = True
                        break
        if not case:
            c = []
            for i in b:
                if(b[i] == 0):
                    c.append(i)
            if c:
                print 'missing',
                for i in c:print i,
                print
            else:
                print 'perfect'
    except EOFError:
        break
