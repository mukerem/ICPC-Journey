n = input()
s = raw_input()

c  = [[0,''] for i in range(26)]
for i in s:
    index  = ord(i)-97
    c[index][0] += 1
    c[index][1] = i
for i in range(c.count([0,''])):
    c.remove([0,''])
c.sort()
ans = ''
for i in range(len(c)-1):
    if not c[i][0]:
        continue
    if c[i][0]<c[i+1][0]:
        ans += c[i+1][1]+(c[i][1]+c[i+1][1])*c[i][0]
        c[i+1][0] -= (c[i][0]+1)
        c[i][0] = 0
    else:
        ans += c[i][1]*c[i][0]
        c[i][0] = 0
i = len(c)-1
ans += c[i][1]*c[i][0]
print ans
