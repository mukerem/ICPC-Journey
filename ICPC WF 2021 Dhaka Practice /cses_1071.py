n = int(input())
for i in range(n):
    x,y = map(int, input().split())
    if x>y:
        if x%2 == 0:
            k = x*x - y + 1
        else:
            k = (x-1) ** 2 + 1
            k = k + y - 1
    else:
        if y % 2 == 1:
            k = y*y - x + 1
        else:
            k = (y-1) ** 2 + 1
            k = k + x - 1
    print(k)
        
