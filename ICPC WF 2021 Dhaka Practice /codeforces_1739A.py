for _ in range(int(input())):
    a,b = map(int, input().split())
    if a == 3:
        print(2, end=' ')
    else:
        print(1, end= ' ')
    if b == 3:
        print(2)
    else:
        print(1)
