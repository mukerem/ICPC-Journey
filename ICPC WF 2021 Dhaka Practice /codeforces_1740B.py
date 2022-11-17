import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n = int(input())
    a = []
    b = []
    u = 0
    v = 0
    
    for i in range(n):
        x,y = map(int, input().split())
        u += min(x, y) * 2
        v = max(v, x, y)

    u += 2*v
    print(u)        
    
