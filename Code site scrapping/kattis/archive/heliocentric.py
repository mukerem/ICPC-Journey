# Time: 2022-08-17 10:21:40
# title: Heliocentric
# language: Python 3


i = 0
while 1:
    i += 1
    try:
        e, m = map(int, input().split())
        x = 365
        y = 687
        if e+m == 0:
            print(f'Case {i}: 0')
            continue
        z = x - e
        a = z
        while 1:
            w = a + m
            if w % y == 0:
                print(f'Case {i}: {a}')
                break
            a += x
    except:
        break