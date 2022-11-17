# Time: 2022-08-14 17:29:01
# title: Mirror Images
# language: Python 3


t = int(input())
for _ in range(t):
    r,c = map(int, input().split())
    a = []
    for  j in range(r):
        a.append(input())
    print(f'Test {_+1}')
    for i in range(r):
        print(a[r-i-1][::-1])