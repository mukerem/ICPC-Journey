# Time: 2022-08-17 12:18:35
# title: Flow Layout
# language: Python 3


while 1:
    w = int(input())
    if w == 0:
        break
    a = 0
    b = 0
    c = 0
    d = []
    while 1:
        x, y = map(int, input().split())
        if x == -1 and y == -1:
            break
        if c + x <= w:
            c += x
            d.append(y)
        else:
            a = max(a, c)
            b += max(d)
            d = [y]
            c = x
    a = max(a, c)
    b += max(d)
    print(f'{a} x {b}')