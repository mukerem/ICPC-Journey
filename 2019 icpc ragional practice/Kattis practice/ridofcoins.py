import sys
a = input()
b = [int(i) for i in raw_input().split()]
c = [1,5,10,25]
ans = 0
x = a % 5
if b[0] < x:
    print 'Impossible'
    sys.exit(0)
if a < x :
    print ans + a
    sys.exit(0)
ans += x
a -= x 
b[0] -= x

x = b[0] - b[0] % 5
if a < x :
    print ans + a
    sys.exit(0)
a -= x
ans += x

# 5
if b[1] == 0 and  < a%10 == 5:
    print 'Impossible'
    sys.exit(0)
if a <= b[1] * 5 :
    print ans + a/5
    sys.exit(0)
if b[1] % 2 == 0 and a % 10 == 0 or b[1] % 2 == 0 and a % 10 == 5:
    x = b[1]
elif b[1] % 2 == 1 and a % 10 == 0:
    x = b[1]-1
elif b[1] % 2 == 0 and a % 10 == 5:
    x = b
ans += x
a -= x * 5
b[1] -= x

if b[1]%2 == 0:
    x = b[1]
else:
    x = b[1] - 1

if a < x * 5 :
    print ans + a/5
    sys.exit(0)
a -= x * 5
ans += x

#10
x = a % 10
if b[1] < x:
    print 'Impossible'
    sys.exit(0)
if a < x * 5 :
    print ans + a
    sys.exit(0)
ans += x
a -= x * 5
b[1] -= x

if b[1]%2 == 0:
    x = b[1]
else:
    x = b[1] - 1

if a < x * 5 :
    print ans + a/5
    sys.exit(0)
a -= x * 5
ans += x


print x,ans, a,b
print ans

    

