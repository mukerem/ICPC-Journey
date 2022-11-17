# Time: 2022-08-16 22:30:05
# title: One Chicken Per Person!
# language: Python 3


a, b = map(int, input().split())
k = b - a
if  k > 1:
    print(f'Dr. Chaz will have {k} pieces of chicken left over!')
elif k == 1:
    print(f'Dr. Chaz will have 1 piece of chicken left over!')
elif k == -1:
    print(f'Dr. Chaz needs 1 more piece of chicken!')
else:
    print(f'Dr. Chaz needs {-k} more pieces of chicken!')