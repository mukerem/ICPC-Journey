n = int(input())
for i in range(n):
    a,b = map(int, input().split())
    if a>b:a,b=b,a
    if 2*a<b:
        print('NO')
    else:
        c = 2*a-b
        if c%3 == 0:
            print('YES')
        else:
            print('NO')
