# Time: 2022-08-14 12:12:55
# title: Birthday Memorization
# language: Python 3


d = {}
n = int(input())
for i in range(n):
    a,b,c = input().split()
    b = int(b)
    if not c in d or d[c][0] < b:
        d[c] = (b, a)
print(len(d))
a = [d[i][1] for i in d]
a.sort()
for i in a:
    print(i)
    