from math import factorial
for _ in range(int(input())):
    n = int(input())
    s = factorial(2*n)//factorial(n+1)
    t = s//factorial(n)
    print(t)
