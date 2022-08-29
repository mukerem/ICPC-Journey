n = input()
x = []
for i in range(n):
    
    x.append(input())
x.sort(reverse = True)
ans = 0
for i in range(2, n, 3):
    ans += x[i]
print sum(x) - ans
