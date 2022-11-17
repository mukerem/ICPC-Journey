# Time: 2022-08-26 22:46:13
# title: Army Strength (Hard)
# language: Python 3


n = int(input())
for i in range(n):
    s = input()
    ng, nm = map(int, input().split())
    m = list(map(int, input().split()))
    g = list(map(int, input().split()))
    
    if max(m) >= max(g):
        print('Godzilla')
    else:
        print('MechaGodzilla')