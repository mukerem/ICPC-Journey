# Time: 2022-08-24 19:32:13
# title: Greedily Increasing Subsequence
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
c = [a[0]]
for i in a[1:]:
    if i > c[-1]:
        c.append(i)
print(len(c))
print(*c)