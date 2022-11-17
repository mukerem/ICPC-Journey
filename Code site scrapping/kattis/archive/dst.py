# Time: 2022-08-26 20:01:09
# title: Daylight Saving Time
# language: Python 3


for _ in range(int(input())):
    a,b,c,d = input().split()
    if a == 'F':
        x = int(c) * 60 + int(d) + int(b)
    else:
        x = int(c) * 60 + int(d) - int(b)
    x = x % 1440
    print(x // 60, x%60)