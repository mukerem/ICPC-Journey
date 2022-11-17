# Time: 2022-08-13 21:31:24
# title: Datum
# language: Python 3


d,m = map(int, input().split())
a = (m-1) * 30 + d
b = [0, 1, -2, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1]
a += sum(b[:m])
day = ["Monday", "Tuesday", "Wednesday", "Thursday", 
    "Friday", "Saturday" , "Sunday"]
a += 2
print(day[a%7])