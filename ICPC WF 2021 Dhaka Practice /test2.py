k,t,p,q,x = map(int, input().split())
a = [x%4]
for i in range(1, t):
    x = (x * p) % q;
    a.append(x%4)
pr = 0
def ave(x, y):
    return (x+y)/2
for i in range(t):
    w0, w1, w2, w3 = map(int, input().split())
    s = w0+w1+w2+w3
    z = a[i]
    if z == 0:
        b = w0 / (w0+w1)
        c = w2 / (w2+w3)
        d = w3 / (w2+w3)
        f = c * w0 / (w0+w2) + d*w0 / (w0+w3)
        h = w0 / (w0 + ave(w2, w3))
    elif z == 1:
        b = w1 / (w0+w1)
        c = w2 / (w2+w3)
        d = w3 / (w2+w3)
        f = c * w1 / (w1+w2) + d*w1 / (w1+w3)
        h = w1 / (w1 + ave(w2, w3))
    elif z == 2:
        b = w2 / (w2+w3)
        c = w0 / (w0+w1)
        d = w1 / (w0+w1)
        f = c * w2 / (w2+w0) + d*w2 / (w2+w1)
        h = w2 / (w2 + ave(w0, w1))
    else:
        b = w3 / (w2+w3)
        c = w0 / (w0+w1)
        d = w1 / (w0+w1)
        f = c * w3 / (w3+w0) + d*w3 / (w3+w1)
        h = w3 / (w3 + ave(w0, w1))
    pr += h*b
pr = pr / t
print(pr)
        
