# Time: 2022-08-18 12:29:15
# title: Jumbled Compass
# language: Python 3


a = int(input())
b = int(input())
x = (b-a)%360
y = 360 - x
y = -y
if x <= abs(y):
    print(x)
else:
    print(y)