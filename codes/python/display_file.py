f = open("employe", 'w')
for i in range(50):
    f.write('{"%d", "%s", "%d"},'%(100+i, 5*chr(65+i%26), 5000 + i*50))
f.close()
