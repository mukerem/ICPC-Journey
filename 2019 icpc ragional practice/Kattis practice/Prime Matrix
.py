from math import sqrt
def prime(n):

    for i in range(2, int(sqrt(n))+1):
        if n % i == 0:
            return False
    return True
n,b = [int(i) for i in raw_input().split()]
ll = [i for i in range(1, n)]
x = sum(ll)
z = n
while True:
    if prime(z+x):
        x += z
        ll.append(z)
        break
    z += 1
if n-1>b:
    print 'impossible'
elif z>b:
    if ll[-1] - b < b -ll[-2]:
        t = ll[-2]
        ll[-2] = (t + ll[-1]) - b
        ll[-1] = b
        for i in range(n):
            for j in range(n):
                print ll[(j+i)%n],
            print
    else:
        print 'impossible'
else:
    for i in range(n):
        for j in range(n):
            print ll[(j+i)%n],
        print
