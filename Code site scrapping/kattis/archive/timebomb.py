# Time: 2022-08-15 10:22:18
# title: Timebomb
# language: Python 3


a = """ ***   * *** *** * * *** *** *** *** ***
 * *   *   *   * * * *   *     * * * * *
 * *   * *** *** *** *** ***   * *** ***
 * *   * *     *   *   * * *   * * *   *
 ***   * *** ***   * *** ***   * *** ***"""
b  = []
c = a.split('\n')
for i in range(10):
    x = []
    for j in range(5):
        x.append(c[j][i*4 + 1: i*4+4])
    b.append(x)
s = []
for i in range(5):
    s.append(' ' + input())
    
d = []
for i in range(len(s[0]) // 4):
    x = []
    for j in range(5):
        t = s[j][i*4 + 1: i*4+4]
        if len(t) < 3:
            t += ' ' * (3-len(t))
        x.append(t)
    d.append(x)

z = ''

for i in d:
    if not i in b:
        print('BOOM!!')
        import sys
        sys.exit(0)
    z += str(b.index(i))

if int(z)%6 == 0:
    print('BEER!!')
else:
    print('BOOM!!')
