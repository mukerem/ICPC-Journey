# Time: 2020-12-15 21:26:38
# title: Troll Hunt
# language: Python 3


b,k,g = [int(i) for i in input().split()]
import math
a = k//g
b -= 1
print(int(math.ceil(b/float(a))))
