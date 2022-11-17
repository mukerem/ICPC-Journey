# Time: 2022-08-18 21:38:26
# title: Graduation
# language: Python 3


n,m,k = map(int, input().split())
a = []
for i in range(n):
    a.append(input())
hat = {
    chr(i+65): chr(i+65) for i in range(k)
}
for i in range(m):
    e = set()
    for  j in range(n):
        e.add(a[j][i])
    if len(e) == 1:
        continue
    e = list(e)
    u = hat[e[0]]
    for v in e:
        hat[v] = u
    
c = set()
for i in hat:
    c.add(hat[i])
print(len(c))