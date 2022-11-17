# Time: 2022-08-17 12:09:01
# title: Fun House
# language: Python 3


k = 0
while 1:
        k += 1
        c, r = map(int, input().split())
        #print(c, r)
        if c+r == 0:
            break
        a = []
        
        for i in range(r):
            b = input()
            a.append(list(b))
            if '*' in b:
                x = i
                y = b.index('*')
        #print(x, y)
        e = -1
        if x == 0:
            for i in range(r):
                if a[i][y] in '\/':
                    x = i
                    e = 2 if a[i][y] == '/' else 0
                    break
        elif x == r-1:
            for i in range(r-1, -1, -1):
                if a[i][y] in '\/':
                    x = i
                    e = 0 if a[i][y] == '/' else 2
                    break
        elif y == 0:
            for i in range(c):
                if a[x][i] in '\/':
                    y = i
                    e = 1 if a[x][i] == '/' else 3
                    break
        else:
            for i in range(c-1, -1, -1):
                if a[x][i] in '\/':
                    y = i
                    e = 3 if a[x][i] == '/' else 1
                    break
        d = a[x][y]
        if e == -1:
            if y == 0: e = 0
            elif y == r-1: e = 2
            elif x == 0: e = 3
            else: e = 1
        #print(e, x, y)
        # not (x == 0 or x == r-1 or y == 0 or y == c-1)
        while 1:
            if e == 0:
                    for i in range(y+1, c):
                        if a[x][i] in '\/':
                            y = i
                            e = 1 if a[x][i] == '/' else 3
                            break
                    else:
                        a[x][-1] = '&'
                        break
            elif e == 2:
                    for i in range(y-1, -1, -1):
                        if a[x][i] in '\/':
                            y = i
                            e = 3 if a[x][i] == '/' else 1
                            break
                    else:
                        a[x][0] = '&'
                        break
            elif e == 3:
                    for i in range(x+1, r):
                        if a[i][y] in '\/':
                            x = i
                            e = 2 if a[i][y] == '/' else 0
                            break
                    else:
                        a[-1][y] = '&'
                        break
            else:
                    for i in range(x-1, -1, -1):
                        if a[i][y] in '\/':
                            x = i
                            e = 0 if a[i][y] == '/' else 2
                            break
                    else:
                        a[0][y] = '&'
                        break
            d = a[x][y]
            #print(e, x, y)
            #e = (e + 1)%2
        print(f'HOUSE {k}')
        for i in a:
            print(''.join(i))
  
