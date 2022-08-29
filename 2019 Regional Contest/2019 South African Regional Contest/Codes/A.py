while True:
    n = int(input())
    if n == -1:
        break
    x = [int(i) for i in input().split()]
    if x[0] %2 != 0:
        print('no')
        
    elif x[-1] %2 != 0:
        print('no')
        
    else:
        for i in range(n-1):
            if x[i] % 2 == 0 and x[i+1]%2 == 0:
                print('yes')
                break
        else:
            print('no')
