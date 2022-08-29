for _ in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = 1
    for i in a:
        if i == b:
            b += 1
    print(n - b+1)
