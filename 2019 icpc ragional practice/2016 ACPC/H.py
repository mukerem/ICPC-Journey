from math import ceil
for i in range(input()):
    x,y = [int(k) for k in raw_input().split()]
    z = int(ceil(float(x) / (y+1)))
    print x-z
