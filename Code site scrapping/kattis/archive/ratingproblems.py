# Time: 2022-08-13 20:21:04
# title: Rating Problems
# language: Python 3


n, k = map(int, input().split())
a = []
for i in range(k):
    a.append(int(input()))
s = sum(a)
d = n - k
a = s + d* -3
b = s + d*3
print(a/n, b/n)
