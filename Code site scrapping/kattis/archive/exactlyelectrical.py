# Time: 2020-12-18 09:28:50
# title: Exactly Electrical
# language: Python 3


a,b = [int(i) for i in input().split()]
c,d = [int(i) for i in input().split()]
e = int(input())
s = abs(a-c) + abs(b-d)
if e < s:
    print('N')
else:
    x = e - s
    if x%2 == 0:
        print('Y')
    else:
        print('N')
