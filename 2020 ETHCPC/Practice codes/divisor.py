a,b,c = [int(i) for i in raw_input().split()]
x = '0.'
a *= 10
for i in range(c):
    x += str(int(a//b))
    a = a% b
    a *= 10
print x
