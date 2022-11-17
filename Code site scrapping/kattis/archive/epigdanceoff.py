# Time: 2022-08-18 19:29:51
# title: EpigDanceOff
# language: Python 3


n,m = map(int, input().split())
a = []
for i in range(n):
    a.append(input())
k = 1
for i in range(m):
    for j in range(n):
        if a[j][i] != '_':
            break
    else:
        k += 1
print(k)