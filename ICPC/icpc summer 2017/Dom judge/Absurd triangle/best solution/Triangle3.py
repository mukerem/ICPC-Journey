print (a)
while True:
    a = int(input())
    if a == -1:
        break
    for i in range(1,a+1):
        print (i*'\\')
    
