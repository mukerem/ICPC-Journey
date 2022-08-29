count = 1
import random
from os import system
"""
for i in range(50):
    a = set()
    _in = "secret/"+str(count) + ".in"
    _out = "secret/"+str(count) + ".ans"
    in_file = open(_in, 'w')
    for k in range(10000):
        x = random.randint(2, 2 ** (i+14) - 1)
        while x in a:
            x = random.randint(2, 2 ** (i+14) - 1)
        a.add(x)
        in_file.write("%d\n" % x)
    in_file.write("-1")
    in_file.close()
    system("g++ PowerGame_2018.cpp")
    system("./a.out <%s >%s" %(_in, _out))
    count += 1        
"""
"""
for i in range(50):
    _in = "secret/"+str(count) + ".in"
    _out = "secret/"+str(count) + ".ans"
    in_file = open(_in, 'w')
    for k in range(150):
        n = random.randint(1,100)
        m = random.randint(1,100)
        r = random.randint(1, n)
        c = random.randint(1, m)
        chess = []
        for x in range(n):
            temp = []
            for y in range(m):
                z = random.randint(0,10)
                if z == 1:
                    temp.append('x')
                else:
                    temp.append('.')
            chess.append(temp)
        if k%10 == 0:
          for x in range(n):
              chess[x][m/2] = 'x'
        a = random.randint(0,n-1)
        b = random.randint(0,m-1)
        chess[a][b] = 'B'
        in_file.write("%d %d %d %d\n" %(n,m,r,c))
        for x in chess:
            in_file.write("%s\n" % ''.join(x))
    in_file.write("-1")
    in_file.close()
    system("g++ Chess.cpp")
    system("./a.out <%s >%s" %(_in, _out))
    count += 1        
"""
"""
character = [chr(i) for i in range(48, 58)] + [chr(i) for i in range(97,123)]
all_charater = character[:]
for i in range(1,11):
    _in = "secret/"+str(count) + ".in"
    _out = "secret/"+str(count) + ".ans"
    in_file = open(_in, 'w')
    for k in range(i):
        n = random.randint(1,3 ** i)
        random.shuffle(character)
        in_file.write("%d\n" %(n))
        for p in range(n):
            m = random.randint(1,30)
            s=''
            for k in range(m):
                a = random.randint(0,m)
                s += character[a]
            in_file.write("%s\n" %(s))
        for p in all_charater:
            in_file.write("%s " % p)
            for u in range(1,8):
                c = random.randint(1,u)
                if c == 2:
                   in_file.write("%d " % u)
            in_file.write("-\n")
    in_file.write("-1")
    in_file.close()
    system("g++ 7Segment_2018.cpp")
    system("./a.out <%s >%s" %(_in, _out))
    count += 1 
_in = "secret/"+str(count) + ".in"
_out = "secret/"+str(count) + ".ans"
in_file = open(_in, 'w')
for k in range(i):
    n = 60000
    random.shuffle(character)
    in_file.write("%d\n" %(n))
    for p in range(n):
        m = random.randint(1,30)
        s=''
        for k in range(m):
            a = random.randint(0,m)
            s += character[a]
        in_file.write("%s\n" %(s))
    for p in all_charater:
        in_file.write("%s " % p)
        for u in range(1,8):
            c = random.randint(1,u)
            if c == 2:
               in_file.write("%d " % u)
        in_file.write("-\n")
in_file.write("-1")
in_file.close()
system("g++ 7Segment_2018.cpp")
system("./a.out <%s >%s" %(_in, _out))
"""

"""
for i in range(31):
    _in = "secret/"+str(count) + ".in"
    _out = "secret/"+str(count) + ".ans"
    in_file = open(_in, 'w')
    n = i/3
    end = (2 ** i) % 1e9+1
    if n == 0:
        n = 1
    for j in range(n):
        a = random.randint(0, end)
        b = random.randint(0, end)
        c = random.randint(0, end)
        d = random.randint(0, end)
        q = i * 16 + 4
        in_file.write("%d %d %d %d\n%d\n" %(a,b,c,d,q))
        for k in range(q):
            x = random.randint(- end, end)
            in_file.write("%d\n"%x)
    in_file.write("-1")
    in_file.close()
    system("g++ Recursive_Function.cpp")
    system("./a.out <%s >%s" %(_in, _out))
    count += 1 
"""
for i in range(50):
    _in = "secret/"+str(count) + ".in"
    _out = "secret/"+str(count) + ".ans"
    in_file = open(_in, 'w')
    test = i / 5 + 1
    for j in range(test):
        x = random.randint(2, 4)
        in_file.write("%d\n" % x)
        a = b = c = 0
        for m in range(x):
            n = random.randint(0, 15)
            p = random.randint(0, 15)
            k = random.randint(0, 15)
            while not n+p+k:
                n = random.randint(0, 15)
                p = random.randint(0, 15)
                k = random.randint(0, 15)
            a += n
            b += p
            c += k
            in_file.write("%d %d %d\n" %(n,p,k))
        
        n = random.randint(0, 500)
        p = random.randint(0, 500)
        k = random.randint(0, 500)
        while not n+p+k:
            n = random.randint(0, 500)
            p = random.randint(0, 500)
            k = random.randint(0, 500)
        if j == test/2:
            n = a
            p = b
            k = c
        in_file.write("%d %d %d\n" %(n,p,k))
    in_file.write("-1")
    in_file.close()
    system("g++ fertilizer.cpp")
    system("./a.out <%s >%s" %(_in, _out))
    count += 1 

