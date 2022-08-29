l,r = [int (i) for i in raw_input().split()]
for i in range(l,r+1):
    s = list(str(i))
    if len(s) == len(set(s)):
        print i
        break
else:
    print -1
