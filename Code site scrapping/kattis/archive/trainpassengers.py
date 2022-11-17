# Time: 2022-08-25 21:29:45
# title: Train Passengers
# language: Python 3


cc, n = map(int, input().split())
x = True
d = 0
for i in range(n):
    a,b,c = map(int, input().split())
    if a > d:
        x = False
    d += b - a
    if d < cc and c > 0:
        x = False
    if d > cc:
        x = False
    if d < 0:
        x = False
if d != 0:
    x = False
if x == True:
    print('possible')
else:
    print('impossible')
    