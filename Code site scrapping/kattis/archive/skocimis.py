# Time: 2022-08-14 15:46:22
# title: Skocimis
# language: Python 3


a,b,c = map(int, input().split())

d = 0
while not( a + 1 == b and b+1 == c):
    if b-a > c - b:
        c = b - 1
        b,c = c,b
    else:
        a = b+1
        a,b = b, a
    d += 1
print(d)
