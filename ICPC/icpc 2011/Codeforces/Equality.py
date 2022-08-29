n,k = raw_input().split()
n = int(n)
k = int(k)
a = raw_input()
alp = [i for i in a]
fre = [0 for i in range(k)]
for i in alp:
    index = ord(i)-65
    if index <k:
        fre[index] += 1
minn = min(fre)
print minn * k
