# Time: 2022-08-15 20:03:03
# title: Odd Man Out
# language: Python 3


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    for i in a:
        if a.count(i) == 1:
            print(f'Case #{_+1}: {i}')
            break