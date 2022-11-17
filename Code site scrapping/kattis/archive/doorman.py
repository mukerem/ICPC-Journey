# Time: 2022-08-26 22:52:17
# title: Doorman
# language: Python 3


n = int(input())
s = input()
w = 0
m = 0
ans = 0
for idx, i in enumerate(s):
    if i == 'W':
        w += 1
    else:
        m += 1
    if abs(w-m) > n:
        if idx < len(s) -1 and s[idx+1] == i:
            print(w+m-1)
            break
else:
    print(len(s))