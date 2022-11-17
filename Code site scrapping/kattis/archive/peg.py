# Time: 2022-08-18 11:10:47
# title: Peg
# language: Python 3


a = []
for i in range(7):
    a.append(input())
c = 0
b = ['oo.', '.oo']
for i in a:
    c += i.count(b[0])
    c += i.count(b[1])
d = [''.join([a[i][j]for i in range(7)]) for j in range(7)]
for i in d:
    c += i.count(b[0])
    c += i.count(b[1])
print(c)