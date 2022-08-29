from math import sqrt,ceil
n = input()
for i in range(n):
    s = raw_input()
    ans = ''
    t = int(sqrt(len(s)))
    for k in range(t,0,-1):
        for j in range(t):
            ans += s[k+j*t-1]
    print ans
