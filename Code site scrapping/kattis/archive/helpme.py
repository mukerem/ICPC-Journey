# Time: 2022-08-27 11:49:08
# title: Help Me With The Game
# language: Python 3


w = []
b = []
d = 'KQRBNP'
for i in range(17):
    s = input()
    if i%2 == 0:
        continue
    for j in range(len(s)):
        if s[j] in d:
            if s[j] == 'P':
                r = ''
            else:
                r = s[j]
            r += chr(97 + j//4) + str(8 - i//2)
            w.append(r)
        elif s[j].upper() in d:
            if s[j] == 'p':
                r = ''
            else:
                r = s[j].upper()
            r += chr(97 + j//4) + str(8 - i//2)
            b.append(r)
w = sorted(w,
    key=lambda x: (d.index(x[0]), int(x[2]), x[1]) if x[0] in d else (10, int(x[1]), x[0]))
b = sorted(b,
    key=lambda x: (d.index(x[0]), -int(x[2]), x[1]) if x[0] in d else (10, -int(x[1]), x[0]))

print(f'White:', ','.join(w))
print(f'Black:', ','.join(b))