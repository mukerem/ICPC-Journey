# Time: 2022-08-14 11:32:40
# title: Free Food
# language: Python 3


n = int(input())
a = [False]*366
for i in range(n):
    x, y = map(int, input().split())
    for j in range(x, y+1):
        a[j] = True
print(a.count(True))
        