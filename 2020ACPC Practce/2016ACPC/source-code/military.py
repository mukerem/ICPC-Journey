for _ in range(int(input())):
    a,b = [int(i) for i in input().split()]
    d = a * b // (b+1)
    print(d)
