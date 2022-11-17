# Time: 2019-11-20 16:08:14
# title: Palindromic Password
# language: Python 3


for _ in range(int(input())):
    n = int(input())
    i = 0
    while True:
        s = str(n-i)
        t = str(n+i)
        if len(s)==6 and s == s[::-1]:
            print(s)
            break
        if len(t) == 6 and t == t[::-1]:
            print(t)
            break
        i+=1
