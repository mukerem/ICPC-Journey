k = int(input())
a = list(map(int, input().split()))
if len(a) < k:
    k = len(a)
a.sort(reverse=True)
print(a[k-1])
