# Time: 2022-08-25 20:52:53
# title: A Furious Cocktail
# language: Python 3


n, m = map(int, input().split())
a = []
for i in range(n):
    x = int(input())
    a.append(x)
k = 0
for i in range(n):
    k += m
    if k in a[i + 1:]:
        print('NO')
        break
else:
    print('YES')