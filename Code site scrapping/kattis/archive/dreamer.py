# Time: 2022-08-23 17:17:12
# title: Dreamer
# language: Python 3


for _ in range(int(input())):
    a = []
    b = input().replace(' ', '')
    b = list(b)
    c = 0
    from itertools import permutations
    d = list(permutations(b))
    d = list(set(d))
    e =  []
    for i in d:
        x = int(''.join(i[:2]))
        y = int(''.join(i[2:4]))
        z = int(''.join(i[4:]))
        if x == 0 or y == 0:
            continue
        if y > 12:
            continue
        if z < 2000:
            continue
        if x > 31 or x >29 and y == 2:
            continue
        if x == 31 and not y in [1,3,5,7,8,10,12]:
            continue
        if y == 2 and x == 29:
            if z % 400 == 0:
                pass
            elif z%100 == 0:
                continue
            elif z%4 == 0:
                pass
            else:
                continue
        e.append((z,y,x))
        c += 1
        #print(e[-1])
    if c == 0:
        print(0)
    else:
        h = min(e)
        h = h[::-1]
        x = h[0]
        y = h[1]
        z = h[2]
        x = str(x).zfill(2)
        y = str(y).zfill(2)
        print(c, x,y,z)
    
    
