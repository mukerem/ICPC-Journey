# Time: 2022-08-14 20:43:50
# title: Different Distances
# language: Python 3


while 1:
    a = input()
    if a == '0':
        break
    x1,y1,x2,y2,p = map(float, a.split())
    d = abs((x2-x1)) ** p + abs((y2-y1)) ** p
    d = d ** (1/p)
    print(d)