com = raw_input()
if len(com) >1 and "//" == com[:2] or (len(com) >3 and "/*" ==  com[:2] and "*/" in com[2:]):
    print "It is comment"
else:
    print "It is not comment"

