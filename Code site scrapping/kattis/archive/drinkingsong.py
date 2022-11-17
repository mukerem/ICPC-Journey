# Time: 2022-08-26 11:53:52
# title: Drinking Song
# language: Python 3


i = int(input())
s = input()
for n in range(i, 2, -1):
    print(f'{n} bottles of {s} on the wall, {n} bottles of {s}.\nTake one down, pass it around, {n-1} bottles of {s} on the wall.')
if i > 1:
    print(f'2 bottles of {s} on the wall, 2 bottles of {s}.\nTake one down, pass it around, 1 bottle of {s} on the wall.')
print(f'1 bottle of {s} on the wall, 1 bottle of {s}.\nTake it down, pass it around, no more bottles of {s}.')