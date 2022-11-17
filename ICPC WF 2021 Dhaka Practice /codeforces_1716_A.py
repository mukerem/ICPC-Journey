for _ in range(int(input())):
    n = int(input())
    k = n//3
    if n ==4 or n == 1:
        print(2)
    elif n%3 == 0:
        print(k)
    elif n%3 == 1:
        print(k+1)
    else:
        print(k+1)
