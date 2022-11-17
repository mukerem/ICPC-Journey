def solve():
    n = int(input())
    s = {'a': 1}
    t = {'a': 1}
    for _ in range(n):
        x, y, z = input().split()
        x = int(x)
        y = int(y)
        if x == 1:
            for j in z:
                if j in s:
                    s[j] += y
                else:
                    s[j] = y
        else:
            for j in z:
                if j in t:
                    t[j] += y
                else:
                    t[j] = y
        if len(t) > 1:
            print('YES')
        elif len(s) == 1:
            print(['YES', 'NO'][s['a'] >= t['a']])
        else:
            print('NO')
for _ in range(int(input())):
    solve()
