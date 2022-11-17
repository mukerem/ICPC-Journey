# Time: 2021-09-20 18:14:52
# title: Best Compression Ever
# language: Python 3


n,b=  [int(i) for i in input().split()]
if 2 ** (b+1) >  n:
    print("yes")
else:
    print("no")