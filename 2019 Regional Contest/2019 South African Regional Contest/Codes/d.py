'''
fib = [0,1,1]
for i in range(100):
    x = fib[-1] + fib[-2]
    fib.append(x)

a2 = []
a3 = []
a5 = []
print(fib)
for i in range(102):
    x = fib[i]
    if x%2 == 0:
        a2.append(i)
    if x%3 == 0:
        a3.append(i)
    if x%5 == 0:
        a5.append(i)
print(a2)
print(a3)
print(a5)
'''
while True:
    x = input()
    if x =="-1":
        break
    a,b,p = x.split()
    a = int(a) -1
    b = int(b) 
    p = int(p)
    if p == 2:
        ans = b//3 - a//3
    elif p == 3:
        ans = b//4 - a//4
    elif p == 5:
        ans = b//5 - a//5
    print(int(ans))
