n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
if n%2:
    print("still running")
else:
    s = 0
    b = a[::2]
    c = a[1::2]
    for i in range(n//2):
        s += c[i] - b[i]
