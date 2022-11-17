# Time: 2022-08-13 10:33:29
# title: Batter Up
# language: Python 3


n = input()
a = list(map(int, input().split()))
b  = [i for i in a if i >= 0]
print(sum(b) / len(b))