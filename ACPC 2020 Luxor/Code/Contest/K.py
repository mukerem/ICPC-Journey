from math import ceil
for _ in range(int(input())):
    s1, s2, p, x, h, z = [int(i) for i in input().split()]
    dis = z - p
    t1 = dis / s1
    t2 = z / s2
    if t1 <= t2:
        print(0)
    else:
        y = int(ceil((t1 - t2)/ h))
        if y <= x:
            print(y)
        else:
            print("Impossible")
