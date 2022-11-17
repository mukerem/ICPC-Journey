from math import pi

a , p = [float(i) for i in raw_input().split()]
if a <= p*p/(4*pi):
    print 'Diablo is happy!'
else:
    print 'Need more materials!'
