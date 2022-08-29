import sys
sys.stdin = open("digits.in", 'r')
for  _ in range(int(input())):
    n = int(input())
    x = [int(i) for i in input().split()]
    b = max(x)
    c = len(str(b))
    maxx = pow(10, c)
    minn = pow(10, c-1)
    for i in x:
        if i >= minn:
            maxx = min(maxx, i)
    print(maxx)
