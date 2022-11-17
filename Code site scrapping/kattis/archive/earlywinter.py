# Time: 2022-08-15 21:25:53
# title: Early Winter
# language: Python 3


n , m = map(int, input().split())
a = [int(i) for i in input().split()]
#a.reverse()
idx = 0
for i in a:
    if i <= m:
        print(f"It hadn't snowed this early in {idx} years!")
        break
    idx += 1
else:
    print('It had never snowed this early!')