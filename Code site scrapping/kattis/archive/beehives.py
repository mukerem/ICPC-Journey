# Time: 2022-08-26 21:32:13
# title: Beehives
# language: Python 3


while 1:
    d, n = input().split()
    d = float(d)
    n = int(n)
    if n == 0:
        break
    z = []
    a = 0
    b = 0
    f = set()
    for i in range(n):
        x,y = map(float, input().split())
        for j,k in z:
            dis = (x-j) ** 2 + (y - k) ** 2
            dis = dis ** 0.5
            if dis <= d:
                f.add((j,k))
                f.add((x,y))
        z.append((x, y))
    print(f'{len(f)} sour, {n-len(f)} sweet')
