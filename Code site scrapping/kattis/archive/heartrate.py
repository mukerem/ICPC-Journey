# Time: 2022-08-13 09:17:09
# title: Heart Rate
# language: Python 3


n = int(input())
for i in range(n):
    b, p = list(map(float, input().split()))
    av = 60*b / p
    x = 60 / p
    print('%.4f %.4f %.4f' %(av-x, av, av+x))