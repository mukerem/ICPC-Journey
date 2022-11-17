n = int(input())
k = 1 if n%10 else 0
k += 2 * (n//10)
print(k)
