for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    d = [a[0]]
    for i in range(1, n):
        x = a[i]
        y = d[-1]
        # x = |z-y|
        # z-y = x
        # z-y = -x
        # z = x+y or z = -x+y
        z1 = x+y
        z2 = -x+y
        if z2<0:
            d.append(z1)
            continue
        if z1==z2:
            d.append(z1)
            continue
        print(-1)
        break
    else:
        print(*d)
