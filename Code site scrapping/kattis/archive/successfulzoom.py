# Time: 2022-08-18 08:55:44
# title: Successful Zoom
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
a.insert(0,-1)
for k in range(1, n//2 + 1):
    for j in range(1, n//k + 1):
        if a[j*k] <= a[(j-1) * k]:
            break
    else:
        print(k)
        break
else:
    print('ABORT!')
