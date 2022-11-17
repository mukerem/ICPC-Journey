# Time: 2022-08-23 21:06:46
# title: Toilet Seat
# language: Python 3


s = input()
a = 0
b = 0
c = 0
if s[0] != s[1]:
    if s[0] == 'U':
        b = 1
    else:
        a = 1
else:
    if s[0] == 'U':
        b = -1
    else:
        a = -1
for i in range(1, len(s)):
    if s[i] == 'D':
        a += 2
    else:
        b += 2
    if s[i] != s[i-1]:
        c += 1
print(max(0, a))
print(max(0, b))
print(c)
