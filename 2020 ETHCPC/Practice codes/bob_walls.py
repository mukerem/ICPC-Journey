for i in range(int(input())):
    n = int(input())
    x = [int(j) for j in input().split()]
    a = 1
    m = x[0]
    for j in x[1:]:
        if j > m:
            m = j
            a += 1
    print(a)