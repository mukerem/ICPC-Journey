# Time: 2022-08-25 22:45:16
# title: Minimum Scalar Product
# language: Python 3


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort(reverse=True)
    c = 0
    for i,j in zip(a, b):
        c += i*j
    print(f'Case #{_+1}: {c}')