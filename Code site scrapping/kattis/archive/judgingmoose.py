# Time: 2022-08-14 10:03:41
# title: Judging Moose
# language: Python 3


a, b = map(int, input().split())
if a+b == 0:
    print('Not a moose')
elif a == b:
    print(f'Even {a+b}')
else:
    print(f'Odd {2 * max(a, b)}')