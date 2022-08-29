from math import pi
n,m,r = [float(i) for i in raw_input().split()]
ans = 0.0
rad = r / m

a = [int(i) for i in raw_input().split()]

s = min(a[1], a[3])
t = max(a[1], a[3])
u = min(a[0], a[2])
v = max(a[0], a[2])

ans += rad * (t-s)
rad *= s 
ans += pi * rad * (v-u)/ n
print ans
print rad
