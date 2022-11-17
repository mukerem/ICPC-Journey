# Time: 2022-08-17 22:19:50
# title: 99 Problems
# language: Python 3


s = input()
if len(s) <= 2:
    print(99)
else:
    a = s[:-2]
    x = int(a+'99')
    y = x - 100
    z = int(s)
    if x -  z <= z-y:
        print(x)
    else:
        print(y)