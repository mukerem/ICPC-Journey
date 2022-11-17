# Time: 2022-08-19 08:57:33
# title: Okviri
# language: Python 3


a = ['..#..', '.#.#.', '#.X.#', '.#.#.', '..#..']
b = ['..*..', '.*.*.', '*.X.*', '.*.*.', '..*..']
s = input()
c = ["", "", "", "", ""]
for idx, i in enumerate(s):
    if idx %3 == 2:
        d = b[:]
        d[2] = d[2].replace('X', i)
        for k in range(5):
            c[k] = c[k][:-1] + d[k]
    elif idx % 3 == 1:
        d = a[:]
        d[2] = d[2].replace('X', i)
        for k in range(5):
            c[k] = c[k][:-1] + d[k]
    else:
        d = a[:]
        d[2] = d[2].replace('X', i)
        for k in range(5):
            if idx != 0:
                c[k] = c[k] + d[k][1:]
            else:
                c[k] = c[k] + d[k]
for i in c:
    print(i)
    