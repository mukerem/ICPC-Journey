for i in range(1, int(input()) + 1):
    n, k = map(int, input().split())
    x = bin(k)[2:]
    if len(x) < n:
        print(f'Case #{i}: OFF')
    elif x[n-1] == '1':
        print(f'Case #{i}: ON')
    else:
        print(f'Case #{i}: OFF')
