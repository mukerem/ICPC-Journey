n = input()
x = [int(i) for i in raw_input().split()]
def greedy(c):
    f = 0
    for j in x[::-1]:
        f += c/j
        c = c % j
    return f
for i in range(n-1):
    a = x[i]
    b = x[i+1]
    y = (a+b) - (b%a)
    z = greedy(y)
    print a,b,y,z
    if z > y/a:
        print 'non-canonical'
        break

else:
    print 'canonical'
