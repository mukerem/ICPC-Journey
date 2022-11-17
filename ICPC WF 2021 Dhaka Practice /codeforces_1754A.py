for  _ in range(int(input())):
    n = int(input())
    s = input()
    q = 0
    a = 0
    if s[-1] == 'Q':
        print('NO')
        continue
    s = s[::-1]
    for i in s:
        if i == 'Q':
            q += 1
        else:
            a += 1
        if(q>a):
            print('NO')
            break
    else:
        print('YES')  
