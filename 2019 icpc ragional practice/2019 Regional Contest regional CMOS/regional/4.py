import string
st = input()
al = list(string.ascii_lowercase)

while st != '-1':
    ls = list(st)
    c = 0
    for i in range(int(len(ls)/2)):
        diff = abs(ord(ls[i]) - ord(ls[~i]))
        diff = min(diff, 26-diff)
        c += diff

    print(c)
    st = input()