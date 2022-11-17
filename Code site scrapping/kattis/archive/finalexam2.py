# Time: 2022-08-14 11:34:50
# title: Final Exam
# language: Python 3


n = int(input())
a = []
for i in range(n):
    a.append(input())
b = 0
for i in range(n-1):
    if a[i] == a[i+1]:
        b +=  1
print(b)