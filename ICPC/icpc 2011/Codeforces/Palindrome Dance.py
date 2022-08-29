k = raw_input().split()
n = int(k[0])
a = int(k[1])
b = int(k[2])

d = raw_input().split()
suit = [int (i) for i in d]
x = n-1
cost = 0
minn = min(a,b)
ch = 1
for i in range(x/2 + 1):
    #print i
    if suit [ i ] == 0:
        if suit[x - i] == 0:
            pass
        elif suit[x - i] == 2:
            cost += a
        else:
            print -1
            ch = 0
            break
    elif suit [ i ] == 1:
        if suit[x - i] == 1:
            pass
        elif suit[x - i] == 2:
            cost += b
        else:
            print -1
            ch = 0
            break
    else:
        if suit[x - i] == 0:
            cost += a
        elif suit[x - i] == 1:
            cost += b
        else:
            if not i == x-i:
                cost += 2*minn
            else:
                cost += minn

if ch:
    print cost
