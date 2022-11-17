# Time: 2022-08-15 21:46:56
# title: Average Character
# language: Python 3


s = input() 
a = 0
for i in s:
    a += ord(i)
a //= len(s)
print(chr(a))