from math import sqrt
def primes(x):
    s = int(sqrt(x)) + 1
    for i in range(2, s):
        if x%i == 0:
            return False
    return True
for z in range(1,20):
    n = 10 ** z
    ans = 0
    i = 5
    s = int(sqrt(n))
    while i<=s:
        if primes(i):
            ans += n // i
        i += 2
    print n
    print ans/3

'''
n = int(10 ** 8)
pr = [False for i in range(n+1)]
for i in range(2, int(n ** 0.5)):
    if pr[i]:
        continue
    for j in range(i+i, n, i):
        pr[j]=1
prime = []
for i in range(2, n):
    if not pr[i]:
        prime.append(i)
        


for i in range(1, 9):
    n = int(10 ** i)
    ans = 0
    for k in prime:
        ans += n//k
        if n<k:
            break
    print n, ans
'''
