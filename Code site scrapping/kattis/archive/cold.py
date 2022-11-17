# Time: 2022-08-13 09:54:12
# title: Cold-puter Science
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
c = [i for i in a if i<0]
print(len(c))