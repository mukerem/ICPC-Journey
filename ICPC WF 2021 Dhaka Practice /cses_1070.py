n = int(input())
if n == 1:
    print(1)
elif n<=3:
    print('NO SOLUTION')
else:
    a = [0] * n
    k = n // 2 + n%2
    c = n + n%2 - 1
    for i in range(k):
        a[i] = c
        c -= 2
    c = n - n%2
    k = k 
    for i in range(k, n):
        a[i] = c
        c -= 2
        
    print(*a)
