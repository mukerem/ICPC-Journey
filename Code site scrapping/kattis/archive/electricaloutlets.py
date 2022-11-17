# Time: 2022-08-13 09:46:01
# title: Electrical Outlets
# language: Python 3


_ = int(input())
for i in range(_):
    a = list(map(int, input().split()))
    k = a[0]
    a = a[1:]
    print(sum(a) - k + 1)