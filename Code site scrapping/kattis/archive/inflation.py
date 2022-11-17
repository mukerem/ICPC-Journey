# Time: 2022-08-17 10:09:03
# title: Inflation
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
a.sort()
m = 1
for i in range(1, n+1):
    if i < a[i-1]:
        print('impossible')
        break
    m = min(m, a[i-1] / i)
else:
    print(m)