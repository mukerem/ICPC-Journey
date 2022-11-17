# Time: 2022-08-15 21:28:04
# title: Death Knight Hero
# language: Python 3


n = int(input())
b = n
for i in range(n):
    a = input()
    if 'CD' in a:
        b -= 1
print(b)