# Time: 2022-08-23 21:11:37
# title: Time Travelling Temperatures
# language: Python 3



x, y = map(int, input().split())
if y == 1:
    if x == 0:
        print('ALL GOOD')
    else:
        print('IMPOSSIBLE')
else:
    a = x / (1 - y)
    print(a)