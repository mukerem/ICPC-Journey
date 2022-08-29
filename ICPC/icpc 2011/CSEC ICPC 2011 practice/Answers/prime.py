n,b = raw_input().split()
n = int(n)
b = int(b)

def prime(x):
    for i in range(2,x):
        if x%i == 0:
            return 0
    return 1
if n == b:
    print 'impossible'
else:
    a = [i for i in range(1,n+2)]
    s =sum(a)
    for i in range(s,0,-1):
        
        if prime(i):
            a.remove(s-i)
            break
    m = n*n + n
    k = 0
    t = 0
    while k<m:
        print a[k%n],
        k += 1
        t += 1
        if t%n == 0:
            k += 1
            print
            
    
