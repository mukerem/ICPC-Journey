# Time: 2019-11-19 13:43:01
# title: Pseudoprime numbers
# language: Python 3


from math import sqrt
def prime(n):
    if n<2:return False
    x = int(sqrt(n))
    i = 2
    while i<= x:
        if n%i == 0:
            return False
        i += 1
    return True 
while True:
    p,a = [int(i) for i in input().split()]
    if a == 0 and p == 0:
        break
    if prime(p):
        print("no")
        continue
    x = pow(a,p,p)
    if x == a:
        print("yes")
    else:
        print("no")
        
