n = input()
alp = {}
x = raw_input().split()
for i in range(n):
    alp[chr(65+i)] = x[i]
d = raw_input().split()
truth = {'T': True, 'F': False}

x = []

for i in d:
    if i == '*' or i == '+' or i == '-':
        x.append(i)
    else:
        x.append(truth[alp[i]])

#gate = {'*': and, '+': or, '-': not}
while len(x) > 1:
    if '+' in x:a = x.index('+')
    else:a=1000
    if '*' in x:b = x.index('*')
    else:b=1000
    if '-' in x:c = x.index('-')
    else:c=1000
    if c == min(a,b,c):
        x[c-1] = not x[c-1]
        x.pop(c)
    elif b == min(a,b,c):
        x[b-2] = x[b-2] and x[b-1]
        x.pop(b)
        x.pop(b-1)
    else:
        x[a-2] = x[a-2] or x[a-1]
        x.pop(a)
        x.pop(a-1)
if x[0]:
    print 'T'
else:
    print 'F'
