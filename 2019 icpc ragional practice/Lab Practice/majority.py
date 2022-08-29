t = input()
for _ in range(t):
    n = input()
    d = dict()
    for i in range(n):
        x = input()
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    a = [(-d[i], i) for i in d]
    a.sort()
    print a[0][1]
