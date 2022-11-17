# Time: 2022-08-15 09:25:15
# title: Basketball One-on-One
# language: Python 3


s = input()
a = 0
b = 0
i = 0
while not((a >= 11 or b >= 11) and abs(a-b)>1):
    x = s[i]
    y = int(s[i+1])
    i += 2
    if(x == 'A'):a+=y
    else: b += y
if(a>b):print('A')
else:print('B')
    