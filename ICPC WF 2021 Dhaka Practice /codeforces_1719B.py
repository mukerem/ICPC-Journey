for _ in range(int(input())):
    n, k = map(int, input().split())
    if k%2 == 1:
        print('YES')
        for i in range(1, n, 2):
            print(i, i+1)
    elif k%4 == 2:
        print('YES')
        for i in range(4, n+1, 4):
            print(i-1, i)
        for i in range(2, n+1, 4):
            print(i, i-1)
    else:
        print('NO')
