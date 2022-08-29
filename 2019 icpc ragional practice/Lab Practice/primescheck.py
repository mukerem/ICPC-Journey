from math import *
def primes(n):
    if n<2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n%i == 0:
            print i
            return False
    return True

a = input()
print primes(a)
