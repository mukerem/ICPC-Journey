# Time: 2022-08-26 22:13:53
# title: Army Strength (Easy)
# language: Python 3


n = int(input())
for i in range(n):
    s = input()
    ng, nm = map(int, input().split())
    m = list(map(int, input().split()))
    g = list(map(int, input().split()))
    
    while m and g:
        x = min(m)
        y = min(g)
        if x < y:
            m.remove(x)
        else:
            g.remove(y)
    if m:
        print('Godzilla')
    else:
        print('MechaGodzilla')