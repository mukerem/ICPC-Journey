from math import log
x3 = [3**i for i in range(10)]
per = []
for i in range(2**10):
    k = 0
    n = i
    s = 0
    for j in range(10):
        r = n%2
        n /= 2
        if r:
            s += x3[k]
        k += 1
    per.append(s)
per.sort()
       
t = input()
for _ in range(t):
    x = input()
    for i in per:
        if x <= i:
            print i
            break
        
        
        
