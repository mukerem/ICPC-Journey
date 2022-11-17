# Time: 2022-08-13 23:40:25
# title: Simon Says
# language: Python 3


a = 'Simon says'
for i in range(int(input())):
    s = input()
    if a in s:
        print(s[11:])