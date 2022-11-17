n, k = [int(i) for i in raw_input().split()]
x = float(n) / (10 ** k)
y = round(x)
y *= (10**k)
y = int(y)
print y
