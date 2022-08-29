from math import *
while True:
    try:
        a = input()
        sum = 1
        for i in range(2, int(ceil(sqrt(a)))):
            if a%i == 0:
                sum += (i + a/i)
            if sum - 2 > a:
                break
        x = sqrt(a)
        if(x == int(x)):
            sum+= int(x)
        if sum == a:
            print a, 'perfect'
        elif abs(a-sum)<=2:
            print a, 'almost perfect'
        else:
            print a, 'not perfect'
    except EOFError:
        break
