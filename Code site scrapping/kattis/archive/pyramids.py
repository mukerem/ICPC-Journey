# Time: 2022-08-13 12:21:11
# title: Building Pyramids
# language: Python 3


a = 0
b = 1
n = int(input())
while a <= n:
    c = b * b
    a += c
    if(a > n):break 
    b += 2
print(b//2 )