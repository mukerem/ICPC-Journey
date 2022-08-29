n = input()
k = raw_input().split()
q = [int(i) for i in k]
a = min(q)
b = max(q)
c = b-a
print c - n +1
