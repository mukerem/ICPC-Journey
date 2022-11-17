a,b  = [int(i) for i in raw_input().split()]
s = a * 60 + b
s = s - 45;
if s<0:
    s += 24 * 60
print s/60, s%60
