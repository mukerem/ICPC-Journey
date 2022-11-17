for _ in range(int(input())):
    n, k = map(int,input().split())
    a = list(map(int, input().split()))
    if 1 in a:
        print('YES')
    else:
        print('NO')
