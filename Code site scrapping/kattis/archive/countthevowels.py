# Time: 2022-08-13 09:52:39
# title: Count the Vowels
# language: Python 3


a = input().lower()
b = ['a', 'e', 'i', 'o', 'u']
c = 0
for i in b:
    c += a.count(i)
print(c)