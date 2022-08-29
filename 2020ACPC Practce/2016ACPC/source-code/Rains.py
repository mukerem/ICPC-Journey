from math import sin, cos, pi, tan, sqrt
for _ in range(int(input())):
    n,s,r = [int(i) for i in input().split()]
    theta = pi/n
    #p = 8*r*sin(theta) / (s * (1 + cos(theta)))
    #p= 4*pi * r * r*sin(theta) / (s*s*n)
    #p = 4 * r * sin(theta)/s
    ang = pi*(n-2)/(2*n)
    r2 = r*(1/sin(ang) - 1)
    R = s / (2*sin(theta))
    
    R2 = R - r2
    R2 -= r
    a = s / (2*tan(theta))
    #A = a*n*s/2 = pi * rr * rr
    rr = sqrt(a * n * s / (2 * pi))
    #ave = (R2 + a)/2
    #ave += r
    #p = pi*r*r / (n*s*a)
    #p = 2*pi*r/(n*s)
    #p = p ** 2
    #p = 2*r / (s/(2*tan(theta)) - 2*r)
    p = r / R2
    print("%.4f" % p)
    #print(R, r2, R2, a)
