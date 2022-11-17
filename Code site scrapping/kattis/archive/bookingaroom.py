# Time: 2022-08-17 19:24:01
# title: Booking a Room
# language: Python 3


r, n = map(int, input().split())
a = []
for i in range(n):
    a.append(int(input()))
if r == n:
    print('too late')
else:
    a.sort()
    for i, v in enumerate(a):
        if i+1 != v:
            print(i+1)
            break
    else:
        print(n+1)