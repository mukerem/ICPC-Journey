from math import factorial
while True:
    try:
        n,k = [int(i) for i in input().split()]
        s = [i for i in range(1, n+1)]
        
        while n:
            a = factorial(n)
            y = a//n
            x = k//y
            print(s[x], end=" ")
            s.pop(x)
            n -= 1
            k = k%y
        print()
    except EOFError:
        break
