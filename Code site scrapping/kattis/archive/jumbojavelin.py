# Time: 2022-08-13 09:10:57
# title: Jumbo Javelin
# language: Python 3


n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
b = sum(a) - n + 1
print(b)