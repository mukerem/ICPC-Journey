# Time: 2022-08-14 14:27:52
# title: Synchronizing Lists
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    a = []
    b = []
    for i in range(n):
        a.append(int(input()))
    
    for i in range(n):
        b.append(int(input()))
    c = a[:]
    a.sort()
    b.sort()
    for i in c:
        k = a.index(i)
        print(b[k])
    print()