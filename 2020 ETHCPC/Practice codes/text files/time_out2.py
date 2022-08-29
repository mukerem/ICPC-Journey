import os
import time
a = time.clock()
x = os.system("( cmdpid=$BASHPID; (sleep 1; kill $cmdpid) & exec python2 shut.py <raw >answer")
print time.clock() - a
print x
print type(x)

