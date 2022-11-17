for _ in range(int(input())):
    n, l, r = map(int, input().split())
    a = []
    for i in range(1, n+1):
        x = r//i * i
        if x < l:
            print('NO')
            break
        a.append(x)
    else:
        print('YES')
        print(*a)
