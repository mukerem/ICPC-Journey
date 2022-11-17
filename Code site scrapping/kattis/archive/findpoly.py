# Time: 2022-07-19 17:08:24
# title: Find Poly
# language: Python 3


arr = []
while 1:
    try:
        x = input()
        if x[-1] == ';':
            x = x[:-1]
        y = x.replace(')', '').replace('(', '').split(';')
        for i in y:
            a,b,c,d = map(int, i.split(','))
            arr.append([a,b,c,d])
    except:
        break
t = []
for a,b,c,d in arr:
    an = []
    for i in t:
        for q,w,e,r in i:
            if (a,b) == (q,w) or (a,b) == (e, r) or (c,d) == (q,w) or (c,d) == (e, r):
                if not i in an:
                    an.append(i)
    if not an:
        t.append([[a,b,c,d]])
    else:
        for i in an:
            t.remove(i)
        temp = [[a,b,c,d]]
        for i in an:
            temp.extend(i)
        t.append(temp)

def polygon(arr):
    dic = {}
    for a,b,c,d in arr:
        x = (a,b)
        y = (c, d)
        if x in dic:
            dic[x] += 1
        else:
            dic[x] = 1
        if y in dic:
            dic[y] += 1
        else:
            dic[y] = 1
    for i in dic.values():
        if i != 2:
            return False
    return True

c=  0
for i in t:
    if polygon(i):
        c += 1
print(len(t), c)
