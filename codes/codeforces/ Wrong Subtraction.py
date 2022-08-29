n, k = [int (i) for i in raw_input().split()]
for i in range(k):
    if n%10:
        n -= 1
    else:
        n /= 10
print n
