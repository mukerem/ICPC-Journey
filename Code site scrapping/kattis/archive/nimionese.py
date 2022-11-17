# Time: 2022-08-24 19:17:54
# title: Nimionese
# language: Python 3


s = input().lower().split()
a = ['b', 'c', 'd', 'g', 'k', 'n', 'p', 't']

def x(v):
    m = 100
    for i in a:
        k = abs(ord(i) - ord(v[0]))
        if k < m:
            m = k
            r = i
        elif k == m:
            r = min(r, i)
    b =list(v)
    b[0] = r
    if not '-' in b:
        return ''.join(b)
    idx = b.index('-')
    for i in range(len(b)):
        if i <= idx:
            continue
        if b[i] in a:
            b[i] = r
    return ''.join(b)
    
for i, v in enumerate(s):
    t = x(v)
    if i == 0:
        t = t[0].upper() + t[1:]
    if t[-1].lower() in a:
        if t[-1].lower() in ['b', 'c', 'd', 'g']:
            t += 'ah'
        elif t[-1].lower() in ['k', 'n', 'p']:
            t += 'oh'
        else:
            t += 'uh'
    t = t.replace('-', '')
    print(t, end= ' ')
