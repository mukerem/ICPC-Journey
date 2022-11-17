import sys
sys.stdin = open("abc.in")
n = int(input())
a = list(input())
x = a.count('a')
y = a.count('c')
z = n-x-y
ans = 0
if x == n or y == n:
    print(0)
    exit(0)
if z == 0:
    print(-1)
    exit(0)
if x == n-1 or y == n-1:
    print(0)
    exit(0)
for i in range(x):
    if a[i] != 'a':
        ans += 1
if a[x] == 'c':
        ans += 1
elif a[x] == 'a' and a.index('b') > x:
        ans += 1
m = ans
ans = 0
for i in range(y):
    if a[i] != 'c':
        ans += 1
if a[y] == 'a':
        ans += 1
elif a[y] == 'c' and a.index('b') > y:
        ans += 1

print(min(m, ans))
