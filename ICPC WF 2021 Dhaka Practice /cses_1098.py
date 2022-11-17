t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = c = 0
    for i in a:
        if i%4 == 0:b+=1
        else: c+=1
    if c%2 == 1:
        print('first')
    else:
        print('second')
