m = 1000000007
for i in range(input()):
    x = input()
    z = pow(9, x-1, m)
    print(z * 8)%m
