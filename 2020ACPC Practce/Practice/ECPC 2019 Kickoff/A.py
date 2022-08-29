import sys
sys.stdin = open("collectingofficer.in")
for _ in range(int(input())):
    a = int(input())
    b = input()
    ax = []
    zx = []
    
    for i in range(a):
        if b[i] == 'A':
            ax.append(i)
        elif b[i] == 'Z':
            zx.append(i)
            
    minn = 778
    for i in ax:
        for j in zx:
            if j-i+1 >= 26 and minn > j-i+1:
                v = list(b[i: j+1])
                t = set(v)
                
                if len(t) == 26:
                    c = 0
                    for k in range(len(v)):
                        if v[k] == chr(65 + c):
                            c += 1
                    if c == 26:
                        minn = j-i+1
    print(minn)
    
