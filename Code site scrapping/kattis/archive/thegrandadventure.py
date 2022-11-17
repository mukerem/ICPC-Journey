# Time: 2022-08-23 21:20:36
# title: The Grand Adventure
# language: Python 3


d = {
    'b': '$',
    't': '|',
    'j': '*'
}
for _ in range(int(input())):
    a = input()
    b = []
    for i in range(len(a)):
        c = a[i]
        if c == '.':
            continue
        if not c in d:
            b.append(c)
        else:
            if len(b) > 0 and b[-1] == d[c]:
                b.pop()
            else:
                print('NO')
                break
    else:
        if len(b) > 0:
            print('NO')
        else:
            print('YES')