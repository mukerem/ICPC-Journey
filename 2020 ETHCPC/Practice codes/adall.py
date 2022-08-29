while 1:
    x = input()
    if x == 0:
        break
    y = [int(i) for i in raw_input().split()]
    y.sort()
    s = 0
    t = 0
    for i in y:
        s += i
        t += s
    print t - y[0]
    
4
1
