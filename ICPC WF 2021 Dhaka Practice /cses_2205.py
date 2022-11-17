n = int(input())

for i in range(1 << n):
    val = (i ^ (i >> 1))
         
    s = bin(val)[2::]
    print(s.zfill(n))
 
