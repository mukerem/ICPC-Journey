# Time: 2022-08-14 11:20:23
# title: No Duplicates
# language: Python 3


a = input().split()
if len(a) == len(set(a)):
    print('yes')
else:
    print('no')