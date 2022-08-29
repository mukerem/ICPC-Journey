for _ in range(int(input())):
    a,b,c,d,e = input().split()
    x = [a,b,c,d]
    y = [e,b,c]
    che = False
    if x[0] == '0':
        print('0 '*5)
        continue
    if x[0] == '?' and x[3] == '?':
        x[3] = 0
    if (x + [y[0]]).count('?') == 3:
        if x[0] != '?' and y[0] == '?':
            if x[1] != '?':
                x[3] = 0
                x[2] = int(x[0]) - int(x[1])
            elif x[2] != '?':
                x[3] = 0
                x[1] = int(x[0]) - int(x[2])
            elif x[3] != '?':
                x[1] = int(x[0]) - int(x[3])
                x[2] = 0
            y[1] = x[1]
            y[2] = x[2]
            y[0] = 3 * int(y[1]) + int(y[2])
    if (x + [y[0]]).count('?') == 4 and y[0] != '?':
        x[3] = 0
        x[1] = int(y[0]) // 3
        x[2] = int(y[0]) % 3
        x[0] = x[1] + x[2]
        y[1] = x[1]
        y[2] = x[2]
    if (x + [y[0]]).count('?') == 3 and x[0] == '?' and x[3] == '?':
        x[3] = 0
        if y[0] != '?' and x[1] != '?':
            x[2] = int(y[0]) - int(x[1]) * 3
            x[0] = int(x[1]) + int(x[2])
            y[1] = x[1]
            y[2] = x[2]
        elif y[0] != '?' and x[2] != '?':
            x[1] = (int(y[0]) - int(x[2]))//3
            x[0] = int(x[1]) + int(x[2])
            y[1] = x[1]
            y[2] = x[2]
    if (x + [y[0]]).count('?') == 2 and x[0] == '?' and x[3] == '?':
        x[3] = 0
        x[0] = int(x[1]) + int(x[2])
    if (x + [y[0]]).count('?') == 3:
        x[3] = 0
        if x[1] != '?' and x[2] != '?':
            y[0] = int(x[1]) * 3 + int(x[2])
            x[0] = int(x[1]) + int(x[2])
            y[1] = x[1]
            y[2] = x[2]
        elif y[0] != '?' and x[1] != '?':
            x[2] = int(y[0]) - int(x[1]) * 3
            x[0] = int(x[1]) + int(x[2])
            y[1] = x[1]
            y[2] = x[2]
        elif y[0] != '?' and x[2] != '?':
            x[1] = (int(y[0]) - int(x[2]))//3
            x[0] = int(x[1]) + int(x[2])
            y[1] = x[1]
            y[2] = x[2]
        elif x[0] != '?' and y[0] != '?':
            x[1] = int(y[0]) // 3
            x[2] = int(y[0]) % 3
            x[3] = int(x[0]) - (x[1] + x[2])
            y[1] = x[1]
            y[2] = x[2]
        elif x[3] != '?' and y[0] != '?':
            x[1] = int(y[0]) // 3
            x[2] = int(y[0]) % 3
            x[0] =  x[1] + x[2] + int(x[3])
            y[1] = x[1]
            y[2] = x[2]
    elif (x + [y[0]]).count('?') == 2 and x[1] == '?' and x[2] == '?':
        x[1] = (int(y[0]) + int(x[3]) - int(x[0]))//2
        x[2] = int(y[0]) - 3*int(x[1])
        y[1] = x[1]
        y[2] = x[2]
    if '?' in x:
        if x.count('?') == 1:
            if x[0] == '?':
                x[0] = sum([int(i) for i in x[1:]])
            else:
                t = x.index('?')
                x[t] = '0'
                x[t] = int(x[0]) - sum([int(i) for i in x[1:]])
                if t == 2 or t == 1:
                    y[t] = x[t]   
        else:
            if y[0] == '?':
                y[0] = 3 * int(y[1]) + int(y[2])
            elif y[1] == '?':
                y[1] = (int(y[0]) - int(y[2]))//3
            else:
                y[2] = (int(y[0]) - 3 * int(y[1]))
            x[1] = y[1]
            x[2] = y[2]
        if x.count('?') == 1:
            if x[0] == '?':
                x[0] = sum([int(i) for i in x[1:]])
            else:
                t = x.index('?')
                x[t] = '0'
                x[t] = int(x[0]) - sum([int(i) for i in x[1:]])
                if t == 2 or t == 1:
                    y[t] = x[t]
    
    if '?' in y:
            if y[0] == '?':
                y[0] = 3 * int(y[1]) + int(y[2])
            elif y[1] == '?':
                y[1] = (int(y[0]) - int(y[2]))//3
            else:
                y[2] = (int(y[0]) - 3 * int(y[1]))
    x.append(y[0])
    for i in x:
        print(i, end=' ')
    print()
