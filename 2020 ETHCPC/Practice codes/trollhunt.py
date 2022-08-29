b,k,g = [int(i) for i in input().split()]
import math
a = k//g
b -= 1
print(int(math.ceil(b/float(a))))
