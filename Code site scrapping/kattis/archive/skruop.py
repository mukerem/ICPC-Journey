# Time: 2022-08-13 22:25:57
# title: Skru op!
# language: Python 3


a = 7
for i in range(int(input())):
    s = input()
    if s == 'Skru op!':
        a = min(10, a+1)
    else:
        a = max(0, a-1)
print(a)