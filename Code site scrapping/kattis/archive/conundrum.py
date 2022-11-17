# Time: 2022-08-13 22:29:21
# title: Cryptographer's Conundrum
# language: Python 3


s = input()
n = len(s)
a = 0
b = ['P', 'E', 'R']
for i in range(n):
    if s[i] != b[i%3]:
        a += 1
print(a)