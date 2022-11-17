# Time: 2022-08-14 10:22:48
# title: Kemija
# language: Python 3


a = ['a', 'i', 'o', 'e', 'u']
s = input()
n = len(s)
idx = 0
while idx < n:
    if s[idx] in a:
        n -= 2
        s = s[:idx + 1] + s[idx + 3:]
    idx += 1
print(s)