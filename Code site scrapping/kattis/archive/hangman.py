# Time: 2022-08-14 15:08:56
# title: Hangman
# language: Python 3


a = input()
b = input()
b = b[::-1]
for i in range(26):
    if b[i] in a:
        k = 26 - i
        break
c = len(set(list(a)))
if k - c < 10:
    print('WIN')
else:
    print('LOSE')