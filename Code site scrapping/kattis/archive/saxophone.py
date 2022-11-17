# Time: 2022-08-25 17:11:51
# title: Eb Alto Saxophone Player
# language: Python 3


a = {
    'c': [2,3,4,7,8,9,10],
    'd': [2,3,4,7,8,9],
    'e': [2,3,4,7,8],
    'f': [2,3,4,7],
    'g': [2,3,4],
    'a': [2,3],
    'b': [2],
    'C': [3],
    'D': [1,2,3,4,7,8,9],
    'E': [1,2,3,4,7,8],
    'F': [1,2,3,4,7],
    'G': [1,2,3,4],
    'A': [1,2,3],
    'B': [1,2]
}

for _ in range(int(input())):
    s = input()
    b = [0 for i in range(11)]
    if s == '':
         print(*b[1:])
         continue
    for i in a[s[0]]:
        b[i] += 1
    for i in range(1, len(s)):
        x = a[s[i]]
        y = a[s[i-1]]
        for j in x:
            if not j in y:
                b[j] += 1
        
    print(*b[1:])
