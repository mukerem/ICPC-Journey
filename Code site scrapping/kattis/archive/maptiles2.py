# Time: 2022-08-14 19:18:10
# title: Identifying Map Tiles
# language: Python 3


s = input()
a = len(s)
x = s
y = s
x = x.replace('1', '0').replace('2', '1').replace('3', '1')
y = y.replace('2', '0').replace('3', '1')

x = int(x, 2)
y = int(y, 2)
print(a, y, x)