# Time: 2022-08-16 16:46:52
# title: Quick Brown Fox
# language: Python 3


import string
a = string.ascii_lowercase
for _ in range(int(input())):
    s = input().lower()
    k = []
    for i in a:
        if not i in s:
            k.append(i)
    if k:
        print(f'missing {"".join(k)}')
    else:
        print('pangram')