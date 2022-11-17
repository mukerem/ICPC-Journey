# Time: 2021-04-05 21:55:49
# title: Digit Product
# language: Python 3


a = input().replace('0', '')
b = [int(i) for i in a]
while len(b) > 1:
    c = 1
    for i in b:
        c *= i
    c = str(c)
    c = c.replace('0', '')
    b = [int(i) for i in c]
print(b[-1])
