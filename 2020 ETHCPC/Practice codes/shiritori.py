n = int(input())
d = {}
a = []
for i in range(n):
    a.append(input())
for i in range(1, n):
    if a[i][0] != a[i-1][-1]:
        if i%2 == 0:p=1
        else:p=2
        print("Player %d lost" % p)
        exit(0)
    elif a[:i].count(a[i]) != 0:
        if i%2 == 0:p=1
        else:p=2
        print("Player %d lost" % p)
        exit(0)
print("Fair Game")
