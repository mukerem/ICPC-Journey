# Time: 2022-08-14 12:05:42
# title: Boat Parts
# language: Python 3


p, n = map(int, input().split())
a = []
ans = -1
for i in range(n):
    b = input()
    if b in a:
        pass
    else:
        a.append(b)
        if len(a) == p:
            ans = i+1
if(ans == -1):
    print('paradox avoided')
else:
    print(ans)