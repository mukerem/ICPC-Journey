# Time: 2022-08-24 14:39:30
# title: Recount
# language: Python 3


a = {}
while 1:
    s = input()
    if s == '***':
        break
    if s in a:
        a[s] += 1
    else:
        a[s] = 1
b = [(a[i], i) for i in a]
b.sort(reverse=True)
if len(b) == 1:
    print(b[0][1])
else:
    if b[0][0] == b[1][0]:
        print('Runoff!')
    else:
        print(b[0][1])