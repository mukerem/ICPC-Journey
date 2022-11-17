# Time: 2022-08-18 15:05:23
# title: Howl
# language: Python 3


s = input()
n = len(s)
a = 'AOWH'
b = 'OWH'
n -= 4
n += 1
a += b * (n//3)
a += b[:n%3]
print(a)