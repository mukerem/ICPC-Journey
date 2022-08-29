
def power(a,b):
    if b == 0:
        return 1
    elif b > 0:
        return a * power(a , b -1)
    else:
        return 1.0 / power(a, -b)
    
def approach(num, n):
    i = 0
    while True:
        if power(i, n)  <=num and power(i+1, n) > num:
            return float(i)
        i = i+1
        
def recursive(num,x, n):
    if power(x,n)  - num < 1e-9 and power(x, n) - num > -1e-9:
        return x
    g = (x + num / power(x , n-1) ) / 2;
    return recursive(num, g, n)

def root(num, n):
    x = approach(num, n)
    print 'yes'
    y = recursive(num,x, n)
    return y

while 1:
    n= raw_input()
    if n == "-1":
        break
    num , n = [int(i) for i in n.split()]
    a = root(num, n)
    print a
                        
    
