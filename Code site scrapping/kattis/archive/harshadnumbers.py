# Time: 2022-08-14 09:51:51
# title: Harshad Numbers
# language: Python 3


n = int(input())

k = n%10
while 1:
    d = sum([int(i) for i in str(n)])
    if n%d == 0:
        print(n)
        break
    n += 1
    