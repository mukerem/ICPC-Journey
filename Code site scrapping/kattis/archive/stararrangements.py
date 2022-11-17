# Time: 2022-08-15 15:28:01
# title: Star Arrangements
# language: Python 3


n = int(input())
a = []
for i in range(2, n//2 + 2):
    y = 2*i - 1
    if n % i == 0:
        a.append((i, i))
    if n % y == 0:
        a.append((i, i-1))
    if (n - i) % y == 0:
        a.append((i, i-1))
a.sort()
print(f'{n}:')
for i, j in a:
    print(f'{i},{j}')