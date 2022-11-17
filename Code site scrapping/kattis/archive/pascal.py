# Time: 2019-11-19 18:06:38
# title: Pascal
# language: Python 3


n = int(input())
from math import sqrt
x = int(sqrt(n))+1
if n <1:
    print(0)
else:
    for i in range(2, x):
        if n%i == 0:
            x = n//i
            print(n-x)
            break
    else:
        print(n-1)
