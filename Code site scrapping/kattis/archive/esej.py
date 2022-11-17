# Time: 2022-07-19 15:50:44
# title: Esej
# language: Python 3



from itertools import permutations

a,b = [int(i) for i in input().split()]
let = 'abcdefghijklmnopqrstuvwxyz'

c = max(a, b//2)
tot = []
ct = 0

for i in range(1, 16):
    x = list(permutations(let, i))
    ct += len(x)
    tot.extend(x)
    if ct >= c:
        break
for i in tot[:c]:   
    print(''.join(i), end=' ')
    
