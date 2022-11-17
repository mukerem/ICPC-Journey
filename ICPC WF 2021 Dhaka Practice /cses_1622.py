from itertools import permutations 
a = input()
b = []
c = permutations(list(a))
s = set()
for i in c:
    s.add(''.join(i))
c = list(s)
c.sort()
print(len(c))
for i in c:
    print(i)
