# Time: 2022-08-14 11:29:46
# title: Grading
# language: Python 3


a,b,c,d,e = map(int, input().split())
x = int(input())
if  x >= a:
    print('A')
elif x >= b:
    print('B')
elif x >= c:
    print('C')
elif x >= d:
    print('D')
elif x >= e:
    print('E')
else:
    print('F')