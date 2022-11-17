# Time: 2022-08-13 23:30:04
# title: Speed Limit
# language: Python 3


while 1:
    n = int(input())
    if n == -1:
        break
    a = []
    c = 0
    s = 0
    for i in range(n):
        v, t = map(int, input().split())
        s += v * (t - c)
        c = t
    print(s, 'miles')