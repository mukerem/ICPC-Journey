# Time: 2022-08-13 20:32:22
# title: Magic Trick
# language: Python 3


s = input()
n = len(s)
d = set(list(s))
if n == len(d):
    print(1)
else:
    print(0)