# Time: 2022-08-17 17:16:18
# title: Erase Securely
# language: Python 3


n = int(input())
a = input()
b = input()
if n%2 == 0:
    if a == b:
        print('Deletion succeeded')
    else:
        print('Deletion failed')
else:
    for i, j in zip(a, b):
        if i == j:
            print('Deletion failed')
            break
    else:
        print('Deletion succeeded')