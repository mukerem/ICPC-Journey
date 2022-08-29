while 1:
    m = raw_input().split()
    n = int(m[0])
    if not '0' in m:
        while 1:
            p = raw_input().split()
            num = [int(i) for i in p]
            if 0 in num:
                break
            ch = 1
            
            #print num
            maxx = [i for i in range(1,n+1)]
            # print maxx
            minn = num[0]
            num = num[1:]
            maxx[minn-1] = -1
            for i in num:
                if i>minn :
                    pass
                elif not i == max(maxx[:minn-1]):
                    #print i , max(maxx[:minn-1]) , minn,v
                    print 'No'
                    ch = 0
                    break
                minn = max(minn , i)
                maxx[i-1] = -1
            if ch:
                print 'Yes'
        print 
            
    else:
        break
    
