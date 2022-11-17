# Time: 2022-08-13 20:10:58
# title: Reversed Binary Numbers
# language: Python 3


s = bin(int(input()))
print(int(s[2:][::-1], 2))