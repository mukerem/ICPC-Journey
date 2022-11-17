# Time: 2022-08-25 19:27:26
# title: Delimiter Soup
# language: Python 3


n = int(input())
a = input()
b = []
c = {
    '(': ')',
    '{': '}',
    '[': ']'
}
for i, v in enumerate(a):
    if v == ' ':
        continue
    if v in c:
        b.append(v)
    else:
        if not b:
            print(v, i)
            break
        elif v != c[b[-1]]:
            print(v, i)
            break
        else:
            b.pop()
else:
    print('ok so far')
    