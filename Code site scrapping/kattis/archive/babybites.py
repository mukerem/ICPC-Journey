# Time: 2022-08-17 19:51:22
# title: Baby Bites
# language: Python 3


n = int(input())
s = input().split()
a = []
for i in s:
    if i.isdigit():
        a.append(int(i))
    else:
        if a:
            a.append(a[-1] + 1)
        else:
            a.append(1)
            
for i, v in enumerate(a):
    if i+1 != v:
        print('something is fishy')
        break
else:
    print('makes sense')