# Time: 2022-08-25 22:02:24
# title: Quite a Problem
# language: Python 3


while 1:
    try:
        a = input().lower()
        if 'problem' in a:
            print('yes')
        else:
            print('no')
    except:
        break