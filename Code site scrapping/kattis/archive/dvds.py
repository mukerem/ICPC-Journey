# Time: 2020-12-16 20:37:01
# title: DVDs
# language: Python 3


for _ in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = 1
    for i in a:
        if i == b:
            b += 1
    print(n - b+1)
