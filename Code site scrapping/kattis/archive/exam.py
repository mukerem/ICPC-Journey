# Time: 2022-08-16 10:42:56
# title: Exam
# language: Python 3


n = int(input())
a = input()
b = input()
m = 0
for i, j in zip(a, b):
    if i == j:
        m += 1

z = len(a)
print(z - abs(m-n))