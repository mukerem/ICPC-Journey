# Time: 2022-08-14 09:56:58
# title: Honour Thy (Apaxian) Parent
# language: Python 3


y, p = input().split()
if y[-1] == 'e':
    print(y+'x'+p)
elif y[-1] in ['a', 'o', 'i', 'u']:
    print(y[:-1]+'ex'+p)
elif y[-2:] == 'ex':
    print(y+p)
else:
    print(y+'ex'+p)