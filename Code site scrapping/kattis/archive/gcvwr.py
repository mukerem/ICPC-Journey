# Time: 2022-08-13 09:27:55
# title: GCVWR
# language: Python 3


g,t,n = map(int, input().split())
a = list(map(int, input().split()))

r = (g-t)*9//10

print(r - sum(a))