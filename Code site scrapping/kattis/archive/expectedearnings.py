# Time: 2022-08-17 14:27:44
# title: Expected Earnings
# language: Python 3


n,k,p = input().split()
n = int(n)
k = int(k)
p = float(p)
if k / n <= p:
    print('spela inte!')
else:
    print('spela')