# Time: 2022-08-26 23:30:53
# title: Wizard of Odds
# language: Python 3


n, m = map(int, input().split())
if n <= 2 ** m :
    print('Your wish is granted!')
else:
    print('You will become a flying monkey!')