n = input()
c = 0
for i in range(n):
    t = raw_input()
    c += (t == t[::-1])
print c
