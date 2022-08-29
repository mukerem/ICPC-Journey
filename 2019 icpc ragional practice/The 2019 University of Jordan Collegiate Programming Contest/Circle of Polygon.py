v,s = [float(i) for i in raw_input().split()]
from math import sqrt, pi, cos
theta = 2.0 * pi/v

a = s / (sqrt(2) * sqrt(1 - cos(theta)))
print pi *a*a
