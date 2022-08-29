n = input()
left=dict()
right=dict()
left_size = 0
right_size = 0
for t in range(n):
    q = raw_input().split()
    '''
    if q[0] == '?':
        if q[1] in left:
            a = left.index(q[1])
            b = len(left) - a - 1
            c = a + len(right)
            print min(b,c)
        else:
            a = right.index(q[1])
            b = len(right) - a -1
            c = a + len(left)
            print min(b,c)
    elif q[0] == 'L':
        left.append(q[1])
    else:
        right.append(q[1])
    '''
    
    if q[0] == 'L':
        left[q[1]] = left_size
        left_size += 1
    elif q[0] == 'R':
        right[q[1]] = right_size
        right_size += 1
    else:
        if q[1] in left:
            a = left[q[1]]
            b = left_size - a - 1
            c = a + right_size 
            print min(b,c)
        else:
            a = right[q[1]]
            b = right_size - a - 1
            c = a + left_size 
            print min(b,c)
        
    
