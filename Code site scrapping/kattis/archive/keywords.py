# Time: 2022-08-26 16:15:23
# title: Keywords
# language: Python 3


a = set()
for i in range(int(input())):
    a.add(input().lower().replace('-', ' '))
print(len(a))