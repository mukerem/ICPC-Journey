n = int(input())

while n != -1:
    k = [int(i) for i in input().split()]
    c = 0
    for i in k:
        if i % 2 == 0: c += 1

    flag = True
    if k[0] % 2 != 0 or k[-1] % 2 != 0:
        flag = False
    elif n == 1 and k[0] % 2 != 0:
        flag = False
    elif n == 2 and (k[0] % 2 != 0 or k[1] % 2 != 0): 
        flag = False
    elif c < 4:
        flag = False

    if flag:
        print('yes')
    else:
        print('no')

    n = int(input())