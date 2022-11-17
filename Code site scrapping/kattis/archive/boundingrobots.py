# Time: 2022-08-14 21:07:12
# title: Bounding Robots
# language: Python 3


p = {
    'u': (0, 1),
    'd': (0, -1),
    'r': (1, 0),
    'l': (-1, 0),
}
while 1:
    w, h = map(int, input().split())
    if w+h==0:break
    n = int(input())
    x = 0
    y = 0
    ax = 0
    ay = 0
    for i in range(n):
        d, s = input().split()
        s = int(s)
        u, v = p[d]
        x += u * s
        y += v * s
        ax += u * s
        ay += v * s
        ax = max(0, min(ax, w-1))
        ay = max(0, min(ay, h-1))
    print(f'Robot thinks {x} {y}')
    print(f'Actually at {ax} {ay}')
    print()