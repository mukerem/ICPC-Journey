# Time: 2019-11-20 13:50:18
# title: Catalan Numbers
# language: Python 3


from math import factorial
for _ in range(int(input())):
    n = int(input())
    s = factorial(2*n)//factorial(n+1)
    t = s//factorial(n)
    print(t)
