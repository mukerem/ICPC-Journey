# Time: 2022-08-17 14:33:29
# title: Espresso!
# language: Python 3


n , s = map(int, input().split())
t = 0
c = 0
for i in range(n):
    d = input()
    if d[-1] == 'L':
        x = int(d[:-1]) + 1
    else:
        x = int(d)
    if t + x <= s:
        t += x
    else:
        c += 1
        t = x
print(c)