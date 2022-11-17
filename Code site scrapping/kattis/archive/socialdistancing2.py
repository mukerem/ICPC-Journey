# Time: 2022-08-16 15:53:05
# title: Social Distancing
# language: Python 3


s, n = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
b = []
for i in range(n-1):
    b.append(a[i+1] - a[i] -1 )
b.append(s-a[-1] + a[0] - 1)
c = 0
for i in b:
    c+= (i-1) // 2
print(c)