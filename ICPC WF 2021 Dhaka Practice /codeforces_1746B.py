for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = []
    c = []
    for i in range(n):
        if a[i] == 1:
            b.append(i)
        else:
            c.append(i)
    c.reverse()
    d = 0
    for i in range(min(len(b), len(c))):
        if b[i] > c[i]:
            break
        d += 1
    print(d)
