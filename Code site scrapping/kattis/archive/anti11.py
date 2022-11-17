# Time: 2019-11-19 14:55:36
# title: Ocean's Anti-11
# language: Python 3


m = 1000000007
for _ in range(int(input())):
    n = int(input())
    if n == 1:
        print(2)
        continue
    a = 0
    b = 1
    c = 0
    temp = 0
    for i in range(n-2):
        temp = a
        a = a+b+c
        b *= 2
        c = temp
        temp = c
        a = a%m
        b = b%m
        c = c%m
        #print(i+2,a,b, c)
    ans = pow(2, n, m)
    ans -= (a+b+c)
    ans = ans%m
    print(ans)
    
