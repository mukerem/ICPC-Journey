import itertools
a = [int(i) for i in raw_input().split()]
k = input()
x = list(itertools.combinations(a,k))
ans = 0
for i in x:
    y = 1
    for j in i:
        y *= j
    ans += y
print ans
