n,k = raw_input().split()
k = int( k )
n = int( n )
l = raw_input().split()
num = list()
for j in l:
   v= int(j)
   num.append(v)
num.sort(reverse = True)
minn = min(num)
for i in range(n):
    num[i] = num[i]-minn

pair = []
uniq = set(num)
unique = [i for i in uniq]
unique.sort(reverse = True)
x = 0
for i in range(len(unique) - 1):
    x += num.count(unique[i])
    pair.append([x,unique[i] - unique[i+1]])
total = 0
cut = 0
remainder = 0

for i in range(len(pair)):
    height = pair[i][1]
    col = pair[i][0]
        
    if remainder + height * col < k:
        remainder +=  height * col
        continue
        
    else:
        if remainder + col > k:
            cut += 1
            remainder = 0
        height += remainder/col
        row = k/col
        cut += height/row
        remainder = (height % row)*col
if remainder:
    cut += 1
print cut

