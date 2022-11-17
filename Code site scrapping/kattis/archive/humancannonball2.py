# Time: 2022-08-13 23:06:01
# title: The Amazing Human Cannonball
# language: Python 3


from math import cos, pi, tan

for i in range(int(input())):
    v, theta, x, h1, h2 = map(float, input().split())
    t = x / (v * cos(theta * pi/180))
    y = x * tan(theta*pi/180) - 9.81 * t*t/2
    if h1 +1 <= y and y <= h2 - 1:
        print('Safe')
    else:
        print('Not Safe')
    #print(t)
