# Time: 2022-08-17 20:57:59
# title: Video Speedup
# language: Python 3


n,p,k = map(int, input().split())
a = [int(i) for i in input().split()]
b = 0
a.insert(0,0)
a.append(k)
for i in range(1, n+2):
    c = a[i] - a[i-1]
    c *= (100 + i*p - p)/100
    b += c
print(b)
