direct = [(3, 1), (2,0), (1,3), (0 ,2)]
addx = [(0, 0), (-1, 1), (0, 0), (1, -1)]
addx = [(1, -1), (0, 0), (-1, 1), (0, 0)]

dd = {'\\': 0, '/': 1}
while True:
    b,a = [int(i) for i in raw_input().split()]
    if a+b == 0:
        break
    x = []
    for i in range(a):
        x.append(list(raw_input()))
    for i in range(a):
        for j in range(a):
            if x[i][j] == '*':
                c = i
                d = j
                break
    e = '*'
    dirr = 0
    while True:
        if x[c][d] == 'x':
            x[c][d]='&'
            break
        if not x[c][d] == '.':
            
        dirr = direct[dirr][dd[x[c][d]]]
        
                
        
