n, k = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
m = max(a) - min(a) + 1
c = (m+k-1)//k
if c == 0:
    c = 1
print(c)
