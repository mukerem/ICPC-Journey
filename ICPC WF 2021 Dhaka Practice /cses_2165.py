def TowerOfHanoi(n , s, d, x):
    if n==1:
        print(s, d)
        return
    
    TowerOfHanoi(n-1, s, x, d)
    print(s, d)
    TowerOfHanoi(n-1, x, d, s)
    
n = int(input())
print(2**n-1)
b = TowerOfHanoi(n, 1, 3, 2) 
