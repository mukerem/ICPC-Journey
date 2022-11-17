# Time: 2022-08-13 09:41:11
# title: Eye of Sauron
# language: Python 3


s = input()
a = s.index('(')
b = s[::-1].index(')')
if a == b:
    print('correct')
else:
    print('fix')