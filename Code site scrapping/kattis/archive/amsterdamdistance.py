from math import pi, sqrt
m,n,r = [float(i) for i in raw_input().split()]
ans = 0.0
radd = r/n
a = [int(i) for i in raw_input().split()]

s = min(a[1], a[3])
t = max(a[1], a[3])
u = min(a[0], a[2])
v = max(a[0], a[2])

w = v-u
ans = radd * (t-s)
rad = s * radd
rad2 = (s-1) * radd
arc = pi * rad / n
tot = 0
#print(ans, rad)
while not u == v and s>0:
    #print(v,u, s)
    if (pi * rad * (v-u) / m - pi * rad2 * (v-u) / m) > 2*radd:
        tot += 2*radd
        s -= 1
        rad = rad2
        rad2 = radd * (s-1)
    else:
        tot += pi * rad  / m
        v -= 1
    #print(tot)
ans += tot
print ("%.14f" % ans)
#print rad
