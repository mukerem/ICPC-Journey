# Time: 2022-08-26 19:25:11
# title: Code Guessing
# language: Python 3


a, b = map(int, input().split())
s = input()
if s[0] == 'A' and s[-1] == 'A':
    if b - a == 3:
        print(a+1, a+2)
    else:
        print(-1)
elif s[0:2] == 'AA':
    if b == 7:
        print(8, 9)
    else:
        print(-1)
elif s[2:4] == 'AA':
    if a == 3:
        print(1, 2)
    else:
        print(-1)
elif s[1] == 'A' and s[3] == 'A':
    if a == 2 and b == 4:
        print(1, 3)
    else:
        print(-1)
elif s[0] == 'A' and s[2] == 'A':
    if a == 6 and b == 8:
        print(7, 9)
    else:
        print(-1)
elif s[1] == 'A' and s[2] == 'A':
    if a == 2 and b == 8:
        print(1, 9)
    else:
        print(-1)
else:
    print(-1)
    
'''
ABBA
AABB
BBAA
BABA
ABAB
'''