for _ in range(int(input())):
    a,b,c = map(int, input().split())
    x = a-1
    y = abs(b-c) + c-1
    if x == y:
        print(3)
    elif x<y:
        print(1)
    else:
        print(2)
