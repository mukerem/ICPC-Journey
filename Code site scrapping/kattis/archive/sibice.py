n,w,h = [int(i) for i in raw_input().split()]
from math import sqrt
r = sqrt(w*w + h*h)
for i in range(n):
    x = input()
    if x<= r:
        print 'DA'
    else:
        print 'NE'
