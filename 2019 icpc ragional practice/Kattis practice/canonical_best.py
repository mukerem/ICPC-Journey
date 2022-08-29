n = input()
x = [int(i) for i in raw_input().split()]
def greedy(c):
    f = 0
    for j in x[::-1]:
        f += c/j
        c = c % j
    return f
q = x[2]/x[1]
r= x[2] % x[1]

def canonical():
    if 0<r<x[1]-q:
        return 'non-canonical'
    for i in range(n-2,0,-1):
        for j in range(i,0,-1):
            ci = x[i]
            cj = x[j]
            cm = x[-1]
            if ci + cj > cm and greedy(ci +  cj)>2:
                return 'non-canonical'
                
    return 'canonical'
print canonical()
