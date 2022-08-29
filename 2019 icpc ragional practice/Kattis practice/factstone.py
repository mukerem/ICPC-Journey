while True:
    x = input()
    if x == 0:
        break
    a = (x/10)*10
    b = 2 ** ((a - 1940)/10)
    c = 2 ** b
    #c = 2 ** c - 1
    k = 1
    x = 1
    t = 2
    print c
    while x<c:
        x *= t
        t += 1
    t -= 2
    #print t, x, c, b, a
    print t
        
    
