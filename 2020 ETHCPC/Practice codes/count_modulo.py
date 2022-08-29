a = set()
for i in range(10):
    x = int(input())
    a.add(x%42)
print(len(a))