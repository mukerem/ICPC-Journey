t = input()
for i in range(t):
    n,q = raw_input().split()
    num = raw_input().split()
    uniq = len(set(num))
    if '0' in num:
        uniq -= 1
    iteration = range(int(q))
    for j in iteration:
        que = raw_input().split()
        if len(que) == 1:
            print uniq
        else:
            index = int(que[1])-1
            value = num[index]

            
            if (not que[2] in num) and que[2] != '0':
                uniq += 1
            num[index] = que[2]
            if (not value in num) and value != '0':
                uniq -= 1
            

            
            
