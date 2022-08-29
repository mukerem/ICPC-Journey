info = {}
new = {"name": "title","probid": "short_name", "timelimit": "time_limit", "color": "ballon"}
while 1:
    for i in range(6):
        a,b = raw_input().replace("'", "").split("=")
        if a in new:
            print("%s = %s" % (new[a], b))
