n,m = [int(i) for i in input().split()]
x = []
for i in range(n):
    x.append(list(input()))
for i in range(m):
    for j in range(n-1, -1, -1):
        s = j
        while x[s][i] == 'o' and s<n-1 and x[s+1][i] == '.':
            x[s][i] = '.'
            x[s+1][i] = 'o'
            s += 1
for i in x:
    print(''.join(i))
        
        
