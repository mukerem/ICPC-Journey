from math import sqrt
a,b,c,d = [int(i) for i in raw_input().split()]
s = (a+b+c+d) / 2.0
area = sqrt((s - a) * (s-b) * (s - c) * (s-d))
print area
