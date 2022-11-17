# Time: 2022-08-19 10:58:07
# title: MrCodeFormatGrader
# language: Python 3


n, m = map(int, input().split())
a = list(map(int, input().split()))
b = [i for i in range(1, n+1) if not i in a]
d = [a[0]]
e = []
for i in range(1,m):
    if a[i] == a[i-1]+1:
        d.append(a[i])
    else:
        if len(d) == 1:
            e.append(str(d[0]))
        else:
            e.append(f'{d[0]}-{d[-1]}')
        d = [a[i]]
if len(d) == 1:
    e.append(str(d[0]))
else:
    e.append(f'{d[0]}-{d[-1]}')

print('Errors:', end=' ')
if len(e) == 1:
    print(e[0])
else:
    print(', '.join(e[:-1]), 'and', e[-1])
    
d = [b[0]]
e = []
for i in range(1,len(b)):
    if b[i] == b[i-1]+1:
        d.append(b[i])
    else:
        if len(d) == 1:
            e.append(str(d[0]))
        else:
            e.append(f'{d[0]}-{d[-1]}')
        d = [b[i]]
if len(d) == 1:
        e.append(str(d[0]))
else:
        e.append(f'{d[0]}-{d[-1]}')
print('Correct:', end=' ')
if len(e) == 1:
    print(e[0])
else:
    print(', '.join(e[:-1]), 'and', e[-1])
