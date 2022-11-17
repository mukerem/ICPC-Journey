# Time: 2022-08-13 22:16:22
# title: Avion
# language: Python 3


a = []
for i in range(5):
    s = input()
    if 'FBI' in s:
        a.append(i+1)
if a:
    print(*a)
else:
    print('HE GOT AWAY!')