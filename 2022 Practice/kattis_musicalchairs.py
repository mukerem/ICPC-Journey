n = int(input())
a  =[ int(i) for  i in input().split()]
b = [True] * n

last = 0
idx = 0
for i in range(n-1):
    idx = last
    while not b[idx]:
        idx = (idx + 1)%n
    start = 0
    k = a[idx]
    k = k % (n-i)
    if k == 0: k = n-i
    y = idx
    #print(idx)
    while start < k:
        if b[y]:
            start += 1
        
        last = y
        y = (y+1)%n
    b[last] = False
    #print(b, y, last)
for i in range(n):
    if b[i]:
        print(i+1)
        break

    
