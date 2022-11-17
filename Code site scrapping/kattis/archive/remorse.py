# Time: 2022-08-24 14:20:18
# title: ReMorse
# language: Python 3


a = [1,2,3,5,8,13]
k = 1
z = []
for i in a:
    for j in range(i):
        z.append(k)
    k += 2
s = input()
m = {}
y = 0
for i in s:
    if i.isalpha():
        x = i.upper()
        if x in m:
            m[x] += 1
        else:
            m[x] = 1
        y += 1
# b = list(m.items())
c = [m[i] for i in m]
c.sort(reverse=True)
ans = 0
for i in range(len(c)):
    ans += c[i] * z[i]
ans += 3 * (y - 1)
print(ans)
