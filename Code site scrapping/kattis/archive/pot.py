n = input()
sum = 0.0
from math import pow
for  i in range(n):
    a = raw_input()
    sum += pow(int(a[:-1]), int(a[-1]))
print int(sum)
