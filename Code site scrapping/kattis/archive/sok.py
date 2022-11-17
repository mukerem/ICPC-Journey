# Time: 2022-08-15 16:03:26
# title: Sok
# language: Python 3


a = list(map(int, input().split()))
b = list(map(int, input().split()))
d = 1000000000
m = -1

for i, j in zip(a, b):
    x = i/j
    if x < d:
        d = x
        m = i
for i, j in zip(a, b):
    x = j * d
    print(i - x, end = ' ')
    
