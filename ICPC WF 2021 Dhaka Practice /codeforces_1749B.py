#inp : map(int, input().split())
#inl : list(map(int, input().split()))
#inn : int(input())

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    c = sum(a) + sum(b) - max(b)
    print(c)
