# Time: 2022-08-15 21:01:39
# title: Hydra's Heads
# language: Python 3


while 1:
    h, t = map(int, input().split())
    if h+t == 0:break
    
    a = 0

    if h%2 == 0:
        a = h//2
        h = 0
        if t % 4 != 0:
            d = 4 - t % 4
            a += d
            t += d
        h = t // 2
        a += h
        a += h//2
    else:

        if t == 1:
            a = 2
            t = 0
            h += 1
            a += h // 2
            print(a)
            continue
        a = 1
        h += 1
        t -= 2
        a += h//2
        h = 0
        if t % 4 != 0:
            d = 4 - t % 4
            a += d
            t += d
        h = t // 2
        a += h
        a += h//2
    print(a)
        
            
            
            