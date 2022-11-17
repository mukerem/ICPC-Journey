# Time: 2022-08-16 22:24:52
# title: Peragrams
# language: Python 3


b = {}
s = input()
for i in s:
    if i in b:
        b[i] += 1
    else:
        b[i] = 1
a = [b[i] for i in b]
c = 0
for i in a:
    if i%2:
        c += 1
print(max(0, c-1))