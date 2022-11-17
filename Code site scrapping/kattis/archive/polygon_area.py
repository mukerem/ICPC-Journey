# Time: 2020-12-15 20:16:14
# title: Polygon Area
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    a = []
    area = 0
    clock = 0
    for i in range(n):
        a.append(([float(j) for j in input().split()]))
    a.append(a[0])
    for i in range(n):
        area += (a[i][0] * a[i+1][1] - a[i+1][0] * a[i][1])
        clock += (a[i+1][0] - a[i][0]) * (a[i+1][1] + a[i][1])
    area /= 2.0
    area = abs(area)
    if clock <0:
        print("CCW",round(area, 1))
    else:
        print("CW",round(area, 1))
