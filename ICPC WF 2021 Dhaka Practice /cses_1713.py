
for _ in range(int(input())):
    x = int(input())
    y = int(x ** 0.5)
    c=  0
    for i in range(1, y+1):
        if x%i == 0:
            c += 2
    if y*y == x:
        c -= 1
    print(c)
    
