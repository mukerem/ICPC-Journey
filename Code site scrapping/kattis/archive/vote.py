# Time: 2022-08-24 14:49:21
# title: Popular Vote
# language: Python 3


for _ in range(int(input())):
    n = int(input())
    a = []
    for i in range(n):
        a.append(int(input()))
    c = max(a)
    k = a.index(c) + 1
    
    a.sort(reverse=True)
    if a[0] == a[1]:
        print('no winner')
        continue
    b = sum(a)
    b -= c
    
    if c > b:
        print(f'majority winner {k}')
    else:
        print(f'minority winner {k}')