import os
x = os.system("/usr/bin/time -f '%U %E %S' -o file.txt timelimit -T 10s  python2 shut.py <raw >answer")
print x
print type(x)
