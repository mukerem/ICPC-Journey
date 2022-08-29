v,n = [int(i) for i in raw_input().split()]
from math import ceil
x = v * n /10.0
for i in range(1,10):
    a = int(ceil(i * x))
    print a,
