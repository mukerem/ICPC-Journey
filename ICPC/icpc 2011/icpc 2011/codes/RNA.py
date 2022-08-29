list1 = ['ATTTTTTTTT','TAAAAAAAAA', 'ATATATATAT', 'TATATATATA']

n = input()
for i in range(n):
    x = raw_input()
    c = 0
    for j in range(4):
        if x.count(list1[j]):
            c += 1
    print c
