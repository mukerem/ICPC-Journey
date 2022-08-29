from math import sqrt
def perfect(a,b):
    return int(sqrt(b)) - int(sqrt(a-1))

for i in range(input()):
    a,b = [int(j) for j in raw_input().split()]
    print perfect(a,b)
