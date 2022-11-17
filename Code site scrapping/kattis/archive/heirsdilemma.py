# Time: 2022-08-14 19:37:14
# title: Heir's Dilemma
# language: Python 3


l,h = map(int, input().split())
c = 0
for i in range(l, h+1):
    if len(set(list(str(i)))) != 6:
        continue
    a = [int(j) for j in str(i)]
    for k in a:
        if k == 0:break
    
        if i%k:
            break
    else:
        c += 1
print(c)