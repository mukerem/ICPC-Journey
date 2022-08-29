import sys
sys.stdin = open("sticks.in")
from math import sqrt
for _ in range(int(input())):
    a = [int(i) for i in input().split()]
    k = a[-1]
    a = a[:-1]
    a.sort()
    d = sum(a[1:])
    m = a[1]
    n=  a[2]
    x = sqrt(m*m + n*n)
    
    if a[0] + k >= x:
        a[0] = x
    else:
        a[0] += k
        
    s = sum(a)/2
    area = s
    for i in range(3):
        area *= s - a[i]
    area = sqrt(area)
    print(area)
