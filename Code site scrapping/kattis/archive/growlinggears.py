# Time: 2020-12-16 08:54:30
# title: Growling Gears
# language: Python 3


def torque(a,b,c):
    x = -b/(2*a)
    y = a * x*x + b*x + c
    return y
for _ in range(int(input())):
    n = int(input())
    h = []
    for i in range(n):
        a,b,c = [int(j) for  j in input().split()]
        h.append((torque(-a,b,c), i+1))
    
    print(max(h)[1])
