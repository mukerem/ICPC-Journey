for _ in range(int(input())):
    n = int(input())
    a = []
    for i in range(n):
        x,y = input().split()
        a.append((int(y), x))
    a.sort()
    print(a[-1][1])
