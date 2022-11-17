# Time: 2022-08-21 13:36:13
# title: Coconut Splat
# language: Python 3


s, n = map(int, input().split())
a = [[i, 0] for i in range(1, n+1)]
x = -1
while len(a) > 1:
    x = (x + s) % len(a)
    y, z = a[x]
    if z==0:
        a[x][1] = 1
        a.insert(x,[y, 1])
        x-=1
    elif z == 1:
        a[x][1] = 2
    else:
        a.pop(x)
        x-=1
print(a[0][0])