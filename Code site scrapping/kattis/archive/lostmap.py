# Time: 2022-08-24 20:18:57
# title: Lost Map
# language: Python 3



def minKey(key, mstSet):
    min = 100000000000

    for v in range(V):
        if key[v] < min and mstSet[v] == False:
            min = key[v]
            min_index = v

    return min_index

def primMST():

    key = [100000000000] * V
    parent = [None] * V 
    key[0] = 0
    mstSet = [False] * V

    parent[0] = -1 
    for cout in range(V):
        u = minKey(key, mstSet)

        mstSet[u] = True

        for v in range(V):

           if graph[u][v] > 0 and mstSet[v] == False and key[v] > graph[u][v]:
                key[v] = graph[u][v]
                parent[v] = u
    return parent
    
V = int(input())
graph = []
for i in range(V):
    graph.append([int(i) for i in input().split()])

a = primMST()
b = [(min(idx, v), max(idx, v)) for idx, v in enumerate(a)]
b.sort()
b = b[1:]
for i,j in b:
    print(i+1, j+1)
