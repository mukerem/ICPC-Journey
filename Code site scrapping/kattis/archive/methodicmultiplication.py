# Time: 2020-12-18 09:50:26
# title: Methodic Multiplication
# language: Python 3


a = input()
b = input()
if a=='0' or b == '0':
    print(0)
else:
    c = a.count('S')
    d = b.count('S')
    e = c*d
    f = ''
    f += e * 'S(' + '0'
    f += e*')'
    print(f)
        