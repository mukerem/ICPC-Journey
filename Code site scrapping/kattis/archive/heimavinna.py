# Time: 2022-08-13 12:06:11
# title: Homework
# language: Python 3


s = input().split(';')
a = 0
for i in s:
    if '-' in i:
        x,y = map(int, i.split('-'))
        a += y-x
    a += 1
print(a)
