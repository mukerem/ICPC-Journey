a = input()
sum = 0
for i in range(a):
    x , y =[float(k) for k in raw_input().split()]
    sum += x*y
print "%.3f"%sum
