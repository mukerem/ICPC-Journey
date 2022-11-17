# Time: 2019-11-19 15:59:44
# title: Enlarging Hash Tables
# language: Python 3


from math import sqrt, gcd
def prime(n):
    x = int(sqrt(n))
    i = 2
    while i<= x:
        if n%i == 0:
            return False
        i += 1
    return True
while True:
    n = int(input())
    if n== 0:
        break
    x = 2*n
    while True:
        if prime(x):
            print(x, end="")
            if not prime(n):
                print(" (%d is not prime)" % n)
            print()
            break
        x += 1
