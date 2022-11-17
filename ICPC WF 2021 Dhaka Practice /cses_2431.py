for _ in range(int(input())):
    n = int(input())
    k = 1
    while 1:
        a = int('9' + '0'*(k-1))
        b = a * k
        #print(b)
        if n<=b:
            break
        n -= b
        k += 1
    r = n%k
    x = n // k
    start = int('1' + '0' * (k-1))
    end = start + x - 1
    if r == 0:
        print(str(end)[-1])
    else:
        
        print(str(end+1)[r-1])
