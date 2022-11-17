# Time: 2022-08-24 09:45:53
# title: Right-of-Way
# language: Python 3


a,b,c = input().split()
d = {
    'North': 0,
    'East': 1,
    'South': 2,
    'West': 3
}

a = d[a]
b = d[b]
c = d[c]

if abs(b-a) == 2 and (a-c)%4 == 1:
    print('YES')
elif (a-b) % 4 == 3 and (abs(a-c) == 2 or (a-c)%4 == 1):
    print('YES')
else:
    print('NO')
