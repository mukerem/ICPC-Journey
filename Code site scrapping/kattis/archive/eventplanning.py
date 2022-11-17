# Time: 2022-08-22 09:58:25
# title: Event Planning
# language: Python 3


n, b, h, w = map(int, input().split())
a = 500000
c = False
for i in range(h):
    p = int(input())
    x = list(map(int, input().split()))
    x.sort()
    if x[-1] >= n:
        z = n * p
        if z <= b:
            a = min(a, z)
            c = True
        
if c:
    print(a)
else:
    print('stay home')