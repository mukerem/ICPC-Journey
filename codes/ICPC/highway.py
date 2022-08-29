x,y = [int(i) for i in raw_input().split()]
l = [[]for i in range(x+1)]
def bfs(b,c):
    visited = [False for i in range(x+1)]
    d = []
    d.append(b)
    visited[b] = 1
    while d:
        e = d[-1]
        d.pop(-1)
        for k in l[e]:
            if not visited[k]:
                d.append(k)
                visited[k] = 1
        if c in d:
            return "Yes"
    return "No"
        


for i in range(y):
    a,b,c = [int(i) for i in raw_input().split()]
    if a ==2:
        print bfs(b,c)
    else:
        l[b].append(c)
        l[c].append(b)

