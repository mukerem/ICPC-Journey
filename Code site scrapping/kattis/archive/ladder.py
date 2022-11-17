from math import sin, pi, ceil
a,b = [int(i) for  i in raw_input().split()]
c = a/sin(b * pi/180.0)
print int(ceil(c))
