# Time: 2022-08-13 22:19:33
# title: Apaxiaaaaaaaaaaaans!
# language: Python 3


s = input()
a = ''
for i in range(len(s)-1):
    if s[i] != s[i+1]:
        a += s[i]
a += s[-1]
print(a)