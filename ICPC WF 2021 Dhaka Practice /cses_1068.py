n = int(input())
while n>1:
    print(n, end=' ')
    if n % 2:
        n = n*3 + 1
    else:
        n = n//2
print(1)
