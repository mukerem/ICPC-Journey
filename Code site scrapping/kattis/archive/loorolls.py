# Time: 2022-08-20 11:43:16
# title: Loo Rolls
# language: Python 3


l,n =map(int, input().split())
k =1
a = n

while l%a != 0:
    a = a - l%a
    k+= 1
print(k)