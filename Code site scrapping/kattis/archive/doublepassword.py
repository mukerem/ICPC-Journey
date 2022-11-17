# Time: 2022-08-13 21:22:45
# title: Double Password
# language: Python 3


a = input()
b = input()
c = 0
for i in range(4):
    if a[i] !=b[i]:
        c+=1
print(2**c)