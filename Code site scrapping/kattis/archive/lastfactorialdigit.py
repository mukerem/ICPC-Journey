# Time: 2022-08-13 12:50:49
# title: Last Factorial Digit
# language: Python 3


for i in range(int(input())):
    n = int(input())
    a = [1, 1, 2, 6, 4, 0]
    if n>5:
        print(0)
    else:
        print(a[n])