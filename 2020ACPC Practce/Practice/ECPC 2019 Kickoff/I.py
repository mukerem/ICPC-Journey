n=  int(input())
a = input()
b = [0 for i in range(n+1)]
ans = [0 for i in range(n+1)]
c = 0
d = ''
for i in a:
    if i == '(':
        if d:
            e = int(d)
            print(e, c)
            ans[e] = b[c]
            d = ''
        c += 1
        b[c] = e
    elif i == ')':
        if d:
            e = int(d)
            print(e, c)
            ans[e] = b[c]
            d = ''
        c -= 1
        b[c] = e
    else:
        d += i
for i in ans[1:]:
    print(i)
print(b)
