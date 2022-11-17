# Time: 2021-09-20 13:50:52
# title: Permuted Arithmetic Sequence
# language: Python 3


def art(a):
    d = a[1] - a[0]
    for i in range(len(a) - 1):
        if d != a[i+1] - a[i]:
            return False
    return True
    
t = int(input())
for _ in range(t):
    z = [int(i) for i in input().split()]
    n = z[0]
    a = z[1:]
    if art(a):
        print ("arithmetic")
    elif art(sorted(a)):
        print("permuted arithmetic")
    else:
        print("non-arithmetic")