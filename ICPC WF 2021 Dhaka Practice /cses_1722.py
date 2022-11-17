m = int(1e9)+7
def matrix(a, b): 
    q,w,e,r = a
    t,y,u,i = b
    c = [(q*t+w*u)%m, (q*y+w*i)%m, (e*t+r*u)%m, (e*y+r*i)%m]
    # print(a, b, c)
    return c

def power_p(r,n):
    if n == 0:
        return [1, 0, 0, 1]
    if n%2 == 0:
        v = power_p(r, n//2)
        return matrix(v, v)
    else:
        return matrix(power_p(r, n-1), r)

n = int(input())

a = [0,1,1,1]
b = power_p(a, n)
print(b[1])
