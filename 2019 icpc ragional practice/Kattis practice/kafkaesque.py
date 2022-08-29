n = input()
x = []
x.append(input())
ans = 1
for i in range(n-1):
    x.append(input())
    if x[-2] > x[-1]:
        ans += 1
print ans
