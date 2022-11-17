# Time: 2022-08-14 09:33:39
# title: Poker Hand
# language: Python 3


b = input().split()
a = [i[0] for i in b]
m = 0
for i in a:
    m = max(m, a.count(i))
print(m)