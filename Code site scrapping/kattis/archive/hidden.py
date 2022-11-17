# Time: 2022-08-25 23:51:11
# title: Hidden Password
# language: Python 3


a,b = input().split()
a = list(a)
a.reverse()
for i in b:
    if not a:
        break
    if i == a[-1]:
        a.pop()
    elif i in a:
        break
    
if a:
    print('FAIL')
else:
    print('PASS')
