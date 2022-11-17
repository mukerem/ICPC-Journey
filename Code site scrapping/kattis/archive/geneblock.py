# Time: 2022-08-18 15:41:44
# title: Gene Block
# language: Python 3


for _ in range(int(input())):
    n = int(input())
    a = n%10
    x = [10, 3 ,6 ,9 ,2 ,5 ,8 ,1 ,4, 7 ]
    y = x[a]
    if 7 * y > n:
        print(-1)
    else:
        print(y)