t = input()
from math import radians, tan, cos, sqrt
for _ in range(t):
    n = input()
    angle = radians(180.000/n)
    print(angle)
    s = sqrt(4.000*tan(angle)/n)
    theta = radians(180.000*(n-2)/n)
    area = 10000.0*s*s*n*2/(4*tan(angle)*(1+cos(theta)))
    print "%.5f" % (area)
