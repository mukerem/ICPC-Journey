# Time: 2022-08-13 20:28:23
# title: Parking
# language: Python 3


n = int(input())
for i in range(n):
    t = input()
    a = list(map(int, input().split()))
    print(2 * (max(a) - min(a)))