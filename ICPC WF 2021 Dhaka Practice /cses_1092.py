n = int(input())
if n%4 == 1 or n%4 == 2:
    print('NO')
elif n%4 == 0:
    print('YES')
    a = [1, 4]
    b = [2, 3]

    for i in range(5, n, 4):
        a.extend([i, i+3])
        b.extend([i+1, i+2])
    print(len(a))
    print(*a)
    print(len(b))
    print(*b)
else:
    print('YES')
    a = [1, 2]
    b = [3]

    for i in range(4, n, 4):
        a.extend([i, i+3])
        b.extend([i+1, i+2])
    print(len(a))
    print(*a)
    print(len(b))
    print(*b)
