# Time: 2022-08-14 20:50:18
# title: Dice Game
# language: Python 3


a,b,c,d = map(int, input().split())
u = (b+a) / 2 + (c+d)/2

a,b,c,d = map(int, input().split())
v = (b+a) / 2 + (c+d)/2

if u == v:
    print('Tie')
elif u>v:
    print('Gunnar')
else:
    print('Emma')