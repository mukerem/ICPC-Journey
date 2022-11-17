# Time: 2022-08-25 23:43:06
# title: Keyboardd
# language: Python 3


a = input()
b = input()
c = set()
i = 0
j = 0
for i in range(1, len(b)):
    if b[i] == b[i-1]:
        k = 2 * b[i]
        if b.count(k) > a.count(k):
            c.add(b[i])
for i in c:
    print(i,end='')
