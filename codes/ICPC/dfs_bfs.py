x,y,z = [int(i) for i in raw_input().split()]
l = [[]for i in range(x+1)]
def bfs(b):
    visited = [False for i in range(x+1)]
    d = []
    d.append(b)
    visited[b] = 1
    while d:
        e = d[0]
        print e,
        d.pop(0)
        s= l[e]
        for k in s:
            if not visited[k]:
                d.append(k)
                visited[k] = 1
visited = [False for i in range(x+1)]    
def dfs(b):
    """
    print b,
    visited[b] = 1
    c = l[b]
    for i in c:
        if not visited[i]:
            visited[i] = 1
            dfs(i)
    """
    visited = [False for i in range(x+1)]
    d = []
    d.append(b)
    while d:
        e = d[-1]
        d.pop(-1)
        if not visited[e]:
            print e,
            visited[e] = 1
            s = l[e][::-1]           
            for k in s:
                if not visited[k]:
                    d.append(k)
for i in range(y):
    c,b = [int(i) for i in raw_input().split()]
    l[b].append(c)
    l[c].append(b)
for i in l:
    i.sort()
dfs(z)
print
bfs(z)
