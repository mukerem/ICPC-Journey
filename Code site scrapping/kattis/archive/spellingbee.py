# Time: 2022-08-17 21:48:50
# title: Spelling Bee
# language: Python 3


s = input()
n = int(input())
for i in range(n):
    a = input()
    if len(a) < 4:
        continue
    if not s[0] in a:
        continue
    for j in a:
        if not j in s:
            break
    else:
        print(a)