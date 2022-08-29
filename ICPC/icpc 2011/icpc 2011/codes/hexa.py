

from math import pow
m = {'0':0,'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9,'a':10,'b':11,'c':12,'d':13,'e':14,'f':15}
while 1:
    try:
        x = raw_input()
        x=x.replace('/r','')
        x=x.replace(' ','')
    except EOFError:
        break
    
    t  = 0
    s = 0
    for i in x:
        t += pow(-1,s) * m[i]
        s += 1
    if t == 0:
        print 'yes'
    else:
        print 'no'
        
