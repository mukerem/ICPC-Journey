while 1:
    try:
        n = input()
        x = [int(i) for i in raw_input().split()]
        y = [int(i) for i in raw_input().split()]
        c = 0
        for i in range(n):
            d = x.index(y[i])
            c += (d - i)
            x.pop(d)
            x.insert(i, y[i])
        print c
            
        
    except EOFError:
        break
