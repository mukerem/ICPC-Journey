# Time: 2021-09-20 13:52:08
# title: The Backslash Problem
# language: Python 3


while 1:
    try:
        n = int(input())
        x = input()
        t = ''
        for i in x:
            if '!' <= i and i<= '*' or '[' <= i and i <= ']':
                t += ((2 ** n - 1) * '\\' + i)
            else:
                t += i
        print(t)
    except EOFError:
        break
