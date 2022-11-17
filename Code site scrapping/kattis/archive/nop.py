# Time: 2022-08-19 10:12:52
# title: NOP
# language: Python 3


s = input()
a = 0
p = 0
for i in s[1:]:
    if i.islower():
        p += 1
    else:
        k = (p+4) // 4
        a += (k*4 - p - 1)
        p = 0
print(a)
