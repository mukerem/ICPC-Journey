from os import listdir
from os.path import isfile, join
import shutil
mypath = raw_input()
onlyfiles = [f for f in listdir(mypath) if isfile(join(mypath, f))]
#print onlyfiles
inn = []
out = []
for i in onlyfiles:
    if i[-2:] == 'in':
        inn.append(i)
    elif i[-3:] == 'ans':
        out.append(i)
inn.sort()
out.sort()
a = b = 0
k = 0
#print inn, out
for i in range(min(len(inn), len(out))):
    if inn[a][:-2] == out[b][:-3] :
        x = mypath + str(k) + '/' + inn[a]
        y = mypath + str(k) + '/' + out[b]
        
        shutil.move(x,y)
        a += 1
        b += 1
        k += 1
    elif inn[a][:-2] > out[b][:-3]:
        b += 1
    else:
        a +=1
    #print inn[a], out[b]
# Move a file from the directory d1 to d2
