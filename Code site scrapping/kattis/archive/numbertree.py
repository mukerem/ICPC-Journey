# Time: 2022-08-19 09:37:34
# title: Numbers On a Tree
# language: Python 3


s = input().split()
if len(s) == 1:
    a =s[0]
    b = ''
else:
    a,b = s
d = 2 ** (int(a) + 1) - 1
c = 1
for i in b:
    if i == 'R':
        if d % 2 == 0:
            c = 2*c + 1
        else:
            c = 2*c
    else:
        if d%2 == 0:
            c = 2*c
        else:
            c = 2*c-1
    d -= c
print(d)