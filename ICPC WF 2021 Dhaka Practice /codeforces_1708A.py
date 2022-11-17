for _ in range(int(input())):
    n = int(input())
    a,b,c = map(int, input().split())
    z = [0,a,b,c]
    x = [0] * 4
    for i in range(3):
        x[n] = 1
        n = z[n]
    print(['NO', 'YES'][x[1] and x[2] and x[3]])
