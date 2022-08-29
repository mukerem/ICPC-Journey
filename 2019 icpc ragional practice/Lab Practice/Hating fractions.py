t = input()
for i in range(t):
    a = input()
    b = [int(k) for k in raw_input().split()]
    b.sort()
    for k in range(a-1):
        if b[k+1] % b[k] != 0:
            print 'Array #'+str(i+1)+': Go away!'
            break
    else:
        print 'Array #'+str(i+1)+': This array is bae!'
