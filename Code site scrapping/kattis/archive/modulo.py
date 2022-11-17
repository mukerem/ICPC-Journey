# Time: 2022-08-14 11:19:12
# title: Modulo
# language: Python 3


a = set()
for i in range(10):
    b = int(input())
    a.add(b % 42)
print(len(a))