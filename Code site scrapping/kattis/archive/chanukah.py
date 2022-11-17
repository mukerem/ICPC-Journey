# Time: 2022-08-13 09:56:42
# title: Chanukah Challenge
# language: Python 3


t = int(input())
for i in range(t):
    k, n = map(int, input().split())
    a = n * (n+3)//2
    print(k, a)