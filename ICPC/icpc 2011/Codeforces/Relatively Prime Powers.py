from math import log,pow
factor = [ 0 for i in range(66)]
def factor_counter(x):
    c = 0;
    for i in range(2,x):
        if(x%i == 0):
            c += 1
            c -= factor[i]
    factor[x] = c;
for i in range(4,65):
    factor_counter(i)


t = input() 
for t in range(t):
    n = input()
    power = int(log(n, 2.0))
    total = n-1
    for i in range(2,power+1):
        x = int(pow(n,1.0/float(i)))
        x -= 1
        total -= x
        total += (factor[i] * x)
    print int(total)
