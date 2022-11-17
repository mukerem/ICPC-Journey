# Time: 2022-08-14 18:54:59
# title: Left Beehind
# language: Python 3


while 1:
    x, y = map(int, input().split())
    if x+y == 0:
        break
    if x+y == 13:
        print('Never speak again.')
    elif x == y:
        print('Undecided.')
    elif x < y:
        print('Left beehind.')
    else:
        print('To the convention.')
