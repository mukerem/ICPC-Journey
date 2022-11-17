# Time: 2019-11-19 11:28:33
# title: Jackpot
# language: Python 3


from math import gcd
for _ in range(int(input())):
    w = int(input())
    x = [int(i) for i in input().split()]
    ans = 1
    for i in x:
        g = gcd(ans, i)
        ans = ans * i//g
    if ans > 1e9:
        print("More than a billion.")
    else:
        print(ans)
