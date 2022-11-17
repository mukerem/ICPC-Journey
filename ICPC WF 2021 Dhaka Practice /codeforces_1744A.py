for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    s = list(input())
    b = {}
    for i in range(n):
        x = a[i]
        y = s[i]
        if x in b:
            if y != b[x]:
                print('NO')
                break
        else:
            b[x] = y
    else:
        print('YES')
    #print(b)
