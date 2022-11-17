# Time: 2022-08-23 22:24:42
# title: Bus Numbers
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
a.sort()
b = []
for i in a:
    if b:
        if b[-1] + 1 == i:
            b.append(i)
        else:
            if len(b) > 2:
                print(f'{b[0]}-{b[-1]}', end = ' ')
            else:
                print(*b, end = ' ')
            b = [i]
    else:
        b = [i]
if len(b) > 2:
    print(f'{b[0]}-{b[-1]}', end = ' ')
else:
    print(*b, end = ' ')