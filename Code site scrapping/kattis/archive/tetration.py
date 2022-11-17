# Time: 2022-08-13 23:09:46
# title: Tetration
# language: Python 3


n = float(input())
from math import exp, log
a = exp(log(n)/n)
print(a)