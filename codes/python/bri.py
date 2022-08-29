def root(n):
    x = int(n**(1/3.0))
    for i in range(2,x+1):
        if n%i != 0:
            return 0
    return 1

for i in range(1,10000000):
    if root(i):
        print i

print 'yes'
