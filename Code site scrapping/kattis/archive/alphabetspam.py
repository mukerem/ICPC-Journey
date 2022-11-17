# Time: 2022-08-13 22:22:26
# title: Alphabet Spam
# language: Python 3


s = input()
a = b = c = d = 0
for i in s:
    if i == '_':
        a += 1
    elif i.islower():
        b += 1
    elif i.isupper():
        c += 1
    else:
        d += 1
n = len(s)
print(a/n)
print(b/n)
print(c/n)
print(d/n)