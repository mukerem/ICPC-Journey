''''
t = []
s = []
for i in range(12):
    t.append(input())
    x=input()
    s.append(input())
    x=input()

a = {}
for i in range(12):
    k = s[i].split(',')
    k.reverse()
    for j in k:
        a[j] = t[i]
print(a)
'''
x = {'at': '@', 'and': '&', 'won': '1', 'one': '1', 'two': '2',
     'too': '2', 'to': '2', 'four': '4', 'for': '4', 'bee': 'b',
     'be': 'b', 'bea': 'b', 'see': 'c', 'sea': 'c', 'eye': 'i',
     'owe': 'o', 'oh': 'o', 'are': 'r', 'you': 'u', 'why': 'y',
     'Bee': 'B', 'Be': 'B', 'Bea': 'B', 'See': 'C', 'Sea': 'C',
     'Eye': 'I', 'Owe': 'O', 'Oh': 'O', 'Are': 'R', 'You': 'U',
     'Why': 'Y', 'At': '@', 'And': '&', 'Won': '1', 'One': '1',
     'Two': '2', 'Too': '2', 'To': '2', 'Four': '4', 'For': '4',
     }


for _ in range(int(input())):
    a = []
    t = input()
    
    c = -1
    for i in x:
        t=t.replace(i, str(c))
        a.append((str(c), x[i]))
        c -= 1
    a.reverse()
    for i, j in a:
        t = t.replace(i, j)
    print(t)
