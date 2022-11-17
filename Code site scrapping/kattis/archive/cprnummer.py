# Time: 2022-08-13 22:09:45
# title: Cpr-nummer
# language: Python 3


s = input().replace('-', '')
a = [4, 3, 2, 7, 6, 5, 4, 3, 2, 1]
b = 0
for i in range(10):
    b += a[i] * int(s[i])
if b%11 == 0:
    print(1)
else:
    print(0)