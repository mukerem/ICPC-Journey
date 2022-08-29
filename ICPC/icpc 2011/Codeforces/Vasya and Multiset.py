n = input()
m = raw_input().split()
num = [ int(i) for i in m]

fre = []
ans = ['A' for i in range(n)]
x = 0

other = -1
for i in num:
    if num.count(i) == 1:
        fre.append(x)
    elif num.count(i) == 2:
        pass
    else:
        other = x
    x += 1

if len(fre) % 2 == 1 and other == -1:
    print 'NO'
else:
    print 'YES'
    for i in range(len(fre)/2):
        ans[fre[i]]  = 'B'
    if len(fre) % 2 == 1:
        ans[other] = 'B'
    last = ''
    for i in ans:
        last += i
    print last
