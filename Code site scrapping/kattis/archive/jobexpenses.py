# Time: 2022-08-13 20:44:46
# title: Job Expenses
# language: Python 3


n = input()
a = [int(i) for i in input().split()]
b = 0
for i in a:
    if i < 0:
        b -= i
print(b)