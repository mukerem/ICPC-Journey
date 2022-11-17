# Time: 2021-01-11 11:53:41
# title: Prime Matrix
# language: Python 3


from math import sqrt
def prime(n):
    for i in range(2, n):
        if n%i == 0:
            return False
    return True
 
n,b = [int(i) for i in input().split()]
a = [i for i in range(n-1,0, -1)]
if b<n:
    print("impossible")
    exit(0)
minn = n * (n+1) // 2
maxx = n * ( 2 * b - n + 1) // 2
pr = -1
for i in range(minn, maxx + 1):
    t = prime(i)
    if t:
        pr = i
        break

if pr == -1:
    print("impossible")
    exit(0)
'''     
c = n
s = sum(a)
while 1:
    t = prime(s + c)
    if t:
        a.insert(0, c)
        break
    c += 1
x = a[0] - b
if x <= 0:
    for k in range(n):
        for i in range(n):
            print(a[(i+k)%n], end=' ')
        print()    
else:
    a[0] = b
    c = 1
    b -= 1
    while x > 0 and c < n:
        x -= (b - a[c])
        a[c] = b
        b -= 1
        c += 1
    if x > 0:
        print("impossible")
    else:
        if len(set(a)) != n:
            print("impossible")
        else:
            for k in range(n):
                for i in range(n):
                    print(a[(i+k)%n], end=' ')
                print() 
                
'''
c = (2 * pr + n - n*n)//(2*n)
a = [i for i in range(c, c+n)]
d = pr - sum(a)
for i in range(1, d+1):
    a[-i] += 1
for k in range(n):
    for i in range(n):
        print(a[(i+k)%n], end=' ')
    print() 
    
    
    
    
