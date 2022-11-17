# Time: 2020-12-16 21:16:04
# title: Calculating Dart Scores
# language: Python 3


a = [1,2,3]
b = [i for i in range(1, 21)]
c = [0]
for  i in a:
    for j in b:
        c.append(i*j)
n = int(input())
ans = []
d = {1: "single", 2:"double", 3:"triple"}
for i in c:
    for j in c:
        for k in c:
            if n == i+j+k:
                ans = [i,j,k]

                last = []
                for r in ans:
                    for s in a[::-1]:
                        if r!= 0 and r%s == 0:
                            last.append((s, r//s))
                            break
                last.sort(reverse=True)
                for r,s in last:
                    print(d[r], s)
                            

                exit(0)
print("impossible")
