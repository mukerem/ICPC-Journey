# Time: 2022-08-19 10:23:32
# title: Name Generation
# language: Python 3


from string import ascii_lowercase
from itertools import permutations
a = list(ascii_lowercase)
b = ['a', 'e', 'i', 'o', 'u']
for i in b:
    a.remove(i)
a = a[:8]
c = list(permutations(a))
n = int(input())
for i in range(n):
    x = list(c[i])
    x.insert(2, 'a')
    x.insert(5, 'e')
    x.insert(8, 'o')
    print(''.join(x))
    
