a,b = [int(i) for  i in raw_input().split()]
from math import log
x = log(a) / log(b)
print int(x) + 1
