# Time: 2022-08-15 14:04:57
# title: Tetris
# language: Python 3


c, p = map(int, input().split())
a = list(map(int, input().split()))

k = 1
flat = []
for i in range(1, c):
    if a[i-1] == a[i]:
        k += 1
    else:
        flat.append(k)
        k = 1
flat.append(k)
        
k = 0
for i in range(1, c):
    if a[i-1] - 1 == a[i]:
        k += 1
zig1 = k

k = 0
for i in range(1, c):
    if a[i-1] + 1 == a[i]:
        k += 1
zig2 = k


k = 0
for i in range(1, c-1):
    if a[i-1] == a[i + 1] and a[i-1] - 1 == a[i]:
        k += 1
T = k

k = 0
for i in range(1, c):
    if a[i-1] - 2 == a[i]:
        k += 1
L1 = k

k = 0
for i in range(1, c):
    if a[i-1] + 2 == a[i]:
        k += 1
L2 = k

k = 0
for i in range(2, c):
    if a[i-2] == a[i-1]  == a[i] - 1:
        k += 1
LL1 = k

k = 0
for i in range(2, c):
    if a[i-2] - 1 == a[i-1]  == a[i] :
        k += 1
LL2 = k

LLL1 = LLL2 = 0
k = 0
for i in range(2, c):
    if a[i-2] +1 == a[i-1]  == a[i] :
        k += 1
LLL1 = k

k = 0
for i in range(2, c):
    if a[i-2] == a[i-1]  == a[i] + 1:
        k += 1
LLL2 = k

if p == 1:
    ans = c
    for i in flat:
        ans += max(0, i-3)
if p == 2:
    ans = 0
    for i in flat:
        ans += max(0, i-1)
if p == 3:
    ans = LL1 + zig1
if p == 4:
    ans = LL2 + zig2
if p == 5:
    ans = T + zig1 + zig2
    for i in flat:
        ans += max(0, i-2)
if p == 6:
    ans = 0
    for i in flat:
        ans += max(0, i-2)
        ans += max(0, i-1)
    ans += L1 + LLL1
    
if p == 7:
    ans = 0
    for i in flat:
        ans += max(0, i-2)
        ans += max(0, i-1)
    ans += L2 + LLL2
print(ans)