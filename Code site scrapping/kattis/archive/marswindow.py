# Time: 2022-08-25 23:22:02
# title: Mars Window
# language: Python 3


b = int(input())
c = b - 2000
c = c * 12 + 1
d = c + 12
for i in range(c, d):
    if i%26 == 12:
        print('yes')
        break
else:
    print('no')