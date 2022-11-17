# Time: 2021-02-04 16:03:46
# title: Ants
# language: Python 3


for _ in range(int(input())):
    l,n = list(map(int, input().split()))
    a = []
    while len(a) < n:
        a.extend([int(i) for i in input().split()])
    ans = []
    ans2 = []
    for i in a:
        x = min(i, l-i)
        y = max(i, l-i)
        ans.append(x)
        ans2.append(y)
    print(max(ans), max(ans2))
    
