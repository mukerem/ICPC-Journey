while 1:
    try:
        a = input()
       
        s = ''
        c = 1
        for i in range(len(a)-1):
            if a[i] == a[i+1]:
                c+=1
            else:
                s += str(c)+a[i]
                c = 1
        else:
            s += str(c)+a[-1]
        print(s)
            
    except:
        break
