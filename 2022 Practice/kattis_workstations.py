'''
n,m = [int(i) for i in input().split()]

x = []
y = []
for _ in range(n):
    a,b = [int(i) for i in input().split()]
    x.append(a)
    y.append(a+b)

'''
'''
maxx = -1
for i,j in x:
    if j == '+':
        c += 1
    else:
        c -= 1
    maxx = max(maxx,c)
'''
'''
lock = []
idx = 0
count = 0
maxx = 0
for i in x:
    while idx < n:
        if  i <= (y[idx] + m):
            idx += 1
            break
        idx += 1
    else:
        maxx += 1
    
print(maxx)
'''
from heapq import heappop, heappush

def saves(arrivals, departures, m):
    saves = 0
    while arrivals:
        arrival = heappop(arrivals)
        while arrival - departures[0] > m:
            heappop(departures)
        if departures[0] <= arrival:
            heappop(departures)
            saves += 1
    return saves

def main():
    n,m = map(int,input().split())
    arrivals, departures = [], []
    for _ in range(n):
        a,b = map(int,input().split())
        heappush(arrivals, a)
        heappush(departures, a+b)
    print(saves(arrivals, departures, m))


if __name__ == "__main__":
    main()
