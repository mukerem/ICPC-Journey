# Time: 2022-08-23 21:25:39
# title: Test Drive
# language: Python 3


a,b,c = map(int, input().split())
if b > a and b > c or b<a and b<c:
    print('turned')
elif abs(a-b) == abs(b-c):
    print('cruised')
elif abs(a-b) > abs(b-c):
    print('braked')
else:
    print('accelerated')