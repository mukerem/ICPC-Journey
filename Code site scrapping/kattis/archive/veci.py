from itertools import permutations  
  
  
n = input()
x = list(str(n))
perm = permutations(x)
minn = 10000000
case = False
for i in list(perm):  
    num = int(''.join(i))
    if n < num:
        case = True
        if num < minn:
            minn = num
if case:
    print minn
else:
    print 0
