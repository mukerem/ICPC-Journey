# Time: 2022-08-24 09:33:35
# title: Saving Princess Peach
# language: Python 3


n, y = map(int, input().split())
a = [i for i in range(n)]
for i in range(y):
    b = int(input())
    if b in a:
        a.remove(b)

for i in a:
    print(i)
print(f'Mario got {n - len(a)} of the dangerous obstacles.')
