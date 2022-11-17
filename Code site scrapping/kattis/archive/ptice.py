# Time: 2022-08-14 16:51:25
# title: Ptice
# language: Python 3


n = int(input())
s =  input()
a = 'ABC' * n
b = 'BABC' * n
c = 'CCAABB' * n
aa = bb = cc = 0
for i in range(n):
    if a[i] == s[i]:aa+=1
    if b[i] == s[i]:bb+=1
    if c[i] == s[i]:cc+=1
d = max(aa, bb, cc)
e = []
if d == aa:
    e.append('Adrian')
if d == bb:
    e.append('Bruno')
if d == cc:
    e.append('Goran')
print(d)
for i in e:
    print(i)