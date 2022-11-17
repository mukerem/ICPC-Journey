for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(1, n):
        x = a[i]
        y = a[i-1]
        if x == 0:
            continue
        if y == 0 or x%y != 0:
            print('NO')
            break
        
        a[i] = y
    else:
        print('YES')
