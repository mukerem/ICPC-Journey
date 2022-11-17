'''
n = int(input())
a = list(map(int, input().split()))
a.sort(reverse=True)
q = []
c = 0
for i in range(1, n+1):
    b = a[:i]
    b = sum(b) /100
    c += b/i
    if b == 0:
        q.append(0)
    else:
        q.append(pow(b, b/i) * c)
print(sum(q)/n/c)
'''
while 1:
    try:
        s = list()
        _, n = input().split('/')
        n = int(n)
        n = n*n
        x = 1
        count = 1
        while x*x<n:
            if n%x == 0:
                count += 1
            x += 1
        print(count)
    except EOFError:
        break
