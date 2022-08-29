a = input().strip()

while a != '-1':
    a, b , p = [ int(i) for i in a.split() ]
    if b < 3 and p == 2:
        print(0)
        a = input().strip()
        continue
    elif b < 4 and p == 3:
        print(0)
        a = input().strip()
        continue
    elif b < 5 and p == 5:
        print(0)
        a = input().strip()
        continue
    

    if p == 2:
        if b%3 == 0: b+=1
        if a%3 == 0: a-=1
        value = int( (b//3) - (a//3) )
        print( value )
    elif p == 3:
        if b%4 == 0: b+=1
        if a%4 == 0: a-=1
        value = int( (b//4) - (a//4) )
        print( value )
    else:
        if b%5 == 0: b+=1
        if a%5 == 0: a-=1
        value = int( (b//5) - (a//5) )
        print( value )

    a = input().strip()