s = raw_input()
a = [1, 2, 3]
for i in s:
    if i == 'A':
        a[0],a[1] = a[1], a[0]
    elif i == 'B':
        a[2],a[1] = a[1], a[2]
    else:
        a[0],a[2] = a[2], a[0]
print a.index(1) + 1
