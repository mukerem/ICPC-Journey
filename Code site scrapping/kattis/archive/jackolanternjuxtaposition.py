# Time: 2022-08-13 09:12:46
# title: Jack-O'-Lantern Juxtaposition
# language: Python 3


a = list(map(int, input().split()))
b = 1
for i in a:
    b *= i
print(b)