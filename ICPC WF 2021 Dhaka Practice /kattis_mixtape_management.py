n = int(input())
a = [int(i) for i in input().split()]
b = []
for i in a:
    b.append('1'*i)
k = 101
for i in range(n):
    b[i] = str(k) + b[i]
    k += 1
print(*b)
