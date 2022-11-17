# Time: 2019-11-21 20:10:07
# title: Rimski
# language: Python 3


n = list(input())
x=n.count('X')
l=n.count('L')
c=n.count('C')
v = n.count('V')
i = n.count('I')
ans = ''


if v==1:
    ans = 'V'
if v == 1 and i == 1:
    ans = 'IV'
    i = 0
if x == 1 and (l+c):
    ans = 'X' + 'L'*l  + 'C'*c + ans
    x -= 1
    l=0
    c=0
elif x == 2 and ans == '' and i == 1 and (l+c):
    ans = 'X' + 'L'*l  + 'C'*c + 'IX'
    x = 0
    l=0
    c=0
    i=0
elif x >=1 and ans == '' and i == 1:
    ans = 'IX'
    x-=1
    i=0
ans = 'L'*l  + 'C'*c + x*'X' + ans
ans = ans + i*'I'
print(ans)
