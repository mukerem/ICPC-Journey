# Time: 2022-08-23 09:10:03
# title: Course Scheduling
# language: Python 3


a = {}
b = set()
for i in range(int(input())):
    b.add(input())
for i in b:
    x,y,z = i.split()
    if z in a:
        a[z] += 1
    else:
        a[z] = 1

c = list(a.items())
c.sort()
for i,j in c:
    print(i, j)