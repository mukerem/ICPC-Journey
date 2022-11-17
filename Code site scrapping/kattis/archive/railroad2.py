# Time: 2022-08-14 12:30:57
# title: Railroad
# language: Python 3


x, y = map(int, input().split())
if (4*x - 3*y ) %2 == 0:
    print('possible')
else:
    print('impossible')