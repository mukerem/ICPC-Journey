for _ in range(int(input())):
    n,m = [int(i) for i in input().split()]
    a = input()
    b = input()
    if m == 1:
        print(['YES', 'NO'][not b in a])
        continue
    if a[-m+1:] != b[-m+1:]:
        print('NO')
        continue
    
    if b[0] in a[:-m+1]:
        print('YES')
    else:
        print('NO')
