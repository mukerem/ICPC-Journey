# Time: 2022-08-23 18:09:07
# title: Warehouse
# language: Python 3


for _ in range(int(input())):
    a = {}
    n = int(input())
    for i in range(n):
        c, d = input().split()
        if c in a:
            a[c] += int(d)
        else:
            a[c] = int(d)
    b = [(-a[i], i) for i in a]
    b.sort()
    print(len(b))
    for i, j in b:
        print(j, -i)