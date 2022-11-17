# Time: 2022-08-15 17:12:02
# title: Östgötska
# language: Python 3


s = input()
s = s.split()
a = len(s)
b = 0
for i in s:
    if 'ae' in i:
        b += 1
if (b >= 0.4 * a):
    print('dae ae ju traeligt va')
else:
    print('haer talar vi rikssvenska')
