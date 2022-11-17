# Time: 2022-08-14 19:41:45
# title: Hanging Out on the Terrace
# language: Python 3


n, m = map(int, input().split())
a = 0
t = 0
for i in range(m):
    x, y = input().split()
    y = int(y)
    if x == 'leave':
        t -= y
    else:
        if t + y <= n:
            t += y
        else:
            a += 1
print(a)