a,b,c = [int(i) for i in raw_input().split()]
if a<b:a,b=b,a
for i in range(c):
    a /= 2
    if a<b:a,b=b,a
print a,b
    
