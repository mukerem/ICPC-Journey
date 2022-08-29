import sys
sys.stdin = open("max-pair.in", 'r')
for _ in range(int(input())):
    x = input()
    ans = 0
    y = [[100000000,-1] for i in range(26)]
    for i in range(len(x)):
        t = ord(x[i]) - 97
        y[t][0] = min(y[t][0], i)
        y[t][1] = max(y[t][1], i)
    for i,j in y:
        for k,l in y:
            if i == k and j==l:
                continue
            if i != 100000000 and k != 100000000:
                ans = max(ans, abs(i-k))
            if i != 100000000 and l != -1:
                ans = max(ans, abs(i-l))
            if j != -1 and k != 100000000:
                ans = max(ans, abs(j-k))
            if j != -1 and l != -1:
                ans = max(ans, abs(j-l))
    print(ans)
