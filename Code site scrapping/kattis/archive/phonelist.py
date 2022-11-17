# Time: 2019-11-20 20:18:42
# title: Phone List
# language: Python 3


for _ in range(int(input())):
    n = int(input())
    s = []
    for i in range(n):
        s.append(input())
    s.sort()
    for i in range(n-1):
        x = s[i]
        y = s[i+1]
        if len(x)>len(y):
            x,y=y,x
        k = len(x)
        if x == y[:k]:
            print('NO')
            break
    else:
        print('YES')
