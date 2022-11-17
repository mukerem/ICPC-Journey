# Time: 2022-08-14 15:38:30
# title: Soda Slurper
# language: Python 3


e,f,c = map(int, input().split())
a = e+f
k = 0
while a >= c:
    d = a//c
    a = a%c
    a += d
    k += d
print(k)