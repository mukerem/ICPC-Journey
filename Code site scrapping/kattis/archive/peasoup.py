# Time: 2022-08-25 22:57:50
# title: Pea Soup and Pancakes
# language: Python 3


a = []
for _ in range(int(input())):
    n = int(input())
    b = []
    name = input()
    for i in range(n):
        b.append(input())
    if 'pancakes' in b and 'pea soup' in b:
        a.append(name)
if a:
    print(a[0])
else:
    print('Anywhere is fine I guess')