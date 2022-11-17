# Time: 2022-08-13 21:03:42
# title: Fifty Shades of Pink
# language: Python 3


n = int(input())
a = 0
for i in range(n):
    s = input().lower()
    if 'pink' in s or 'rose' in s:
        a += 1
if a > 0:
    print(a)
else:
    print('I must watch Star Wars with my daughter')