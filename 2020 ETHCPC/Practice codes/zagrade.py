n = list(input())
a = []
bra = []
c = 0
t = []
for i in range(len(n)):
    if n[i] == '(':
        a.append(i)
        c += 1
        t.append(n[i])
    elif n[i] == ')':
        bra.append((c, -a[-1], i))
        a.pop()
        c -= 1
        t.append(n[i])
tot = 2 ** len(bra) - 2
bra.sort()

#print(bra)
ttt = {}
abc = []
def binary(x, l):
    y = []
    while x:
        y.append(x%2)
        x //= 2
    y.reverse()
    y = [0] *(l - len(y)) +y
    abc.append()
    return y
ans = []
for i in range(tot, -1, -1):
    y = binary(i, len(bra))
    m = n[:]
    for j in range(len(bra)):
        if y[j] == 0:
            m[bra[j][2]] = '#'
            m[-bra[j][1]] = '#'
    m = ''.join(m)
    m = m.replace('#', '')
    ans.append(m)
for i in ans:
    print(i)
