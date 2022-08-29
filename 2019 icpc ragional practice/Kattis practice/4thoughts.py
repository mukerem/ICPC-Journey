op = [' * ', ' + ', ' - ',' / ']
s = '4'
def thoughts(n):
    for i in op:
        for j in op:
            for k in op:
                x = s+i+s+j+s+k+s
                if eval(x) == n:
                    return x+" = "+str(n)
    return ""
for _ in range(int(input())):
    n = int(input())
    c = thoughts(n)
    if c:
        print(c)
    else:
        print('no solution')
            
