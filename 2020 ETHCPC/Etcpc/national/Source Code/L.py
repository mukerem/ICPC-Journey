import sys
sys.stdin = open("matrix.in", 'r')
for  _ in range(int(input())):
    n,m = [int(i) for i in input().split()]
    a = []
    for i in range(n):
        a.append(input().split())
    t = ['0'] * m
    count = a.count(t)
    ans = True

    if count != 0 and a[-count:] != [t] * count:
        print('NO')
        continue
    x= []
    n -= count
    for i in range(n):
        for j in range(m):
            if a[i][j] == '1':
                x.append(j)
                break
            elif a[i][j] != '0':
                ans = False
                break
        if ans == False:
            break
    if ans == False:
        print("NO")
        continue
    y = [int(i) for i in x]
    y.sort()
    if x!= y:
        print('NO')
        continue
    for i in x:
        c = 0
        for j in range(n):
            if a[j][i] != '0':
                c += 1
        if c!= 1:
            ans = False
            break
    if ans == False:
        print('NO')
        continue
    print('YES')
        
