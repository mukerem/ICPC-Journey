# Time: 2022-08-15 09:59:26
# title: Tower Construction
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
k = 0
c = -1
for i in a:
    if i > c:
        k+= 1
    c = i
print(k)