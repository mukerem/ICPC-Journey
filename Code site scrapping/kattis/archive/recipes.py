# Time: 2022-08-16 21:27:22
# title: Scaling Recipes
# language: Python 3


for _ in range(int(input())):
    a = []
    r,p,d = map(int, input().split())
    t = 0
    
    for i in range(r):
        x,y,z = input().split()
        y = float(y)
        z = float(z)
        if z == 100:
            q = y
        a.append((x, y, z))

    t /= r
    t = q
    s = d/p
    w = s * t
    print(f'Recipe # {_+1}')
    for i,j,k in a:
        b = k * w / 100
        print(f'{i} {b}')
    print('-'*40)
