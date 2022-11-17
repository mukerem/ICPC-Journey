for  _ in range(int(input())):
    n = int(input())
    i = 0
    a = []
    x = 1
    y = n // 2 + 1
    while i<n:
        a.append(y)
        i += 1
        if i == n:
            break
        a.append(x)
        i += 1
        x += 1
        y += 1
    print(*a)
