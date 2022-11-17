# Time: 2022-08-26 19:57:48
# title: Damaged Equation
# language: Python 3


a,b,c,d = input().split()
def e(s, t):
    try:
        if eval(s) == eval(t):
            d = s + ' = ' + t
            d = d.replace('//', '/')
            v.append(d)
    except:
        pass
k = ['+', '-', '*', '//']
v = []
for i in k:
    for j in k:
        e(f'{a} {i} {b}', f'{c} {j} {d}')
v.sort()
if not v:
    print('problems ahead')
else:
    for i in v:
        print(i)