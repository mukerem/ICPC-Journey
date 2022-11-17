# Time: 2022-08-25 19:32:51
# title: Contest Struggles
# language: Python 3


n, k = map(int, input().split())
d, s = map(int, input().split())
t = d * n
u = s * k
v = t-u
a = v / (n-k)
if a > 100 or a < 0:
    print('impossible')
else:
    print(a)