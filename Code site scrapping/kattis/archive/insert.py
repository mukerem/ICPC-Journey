# Time: 2022-08-18 21:56:02
# title: Tree Insertion
# language: Python 3


def calculateFact(fact: list, N: int) -> None:
 
    fact[0] = 1
    for i in range(1, N):
        fact[i] = fact[i - 1] * i
 
def nCr(fact: list, N: int, R: int) -> int:
 
    if (R > N):
        return 0
 
    res = fact[N] // fact[R]
    res //= fact[N - R]
 
    return res
 
def countWays(arr: list, fact: list) -> int:
 
    N = len(arr)
 
    if (N <= 2):
        return 1
 
    leftSubTree = []
    rightSubTree = []
    root = arr[0]
 
    for i in range(1, N):
        if (arr[i] < root):
            leftSubTree.append(arr[i])
        else:
            rightSubTree.append(arr[i])
 
    N1 = len(leftSubTree)
    N2 = len(rightSubTree)
 
    countLeft = countWays(leftSubTree, fact)
    countRight = countWays(rightSubTree, fact)
 
    return (nCr(fact, N - 1, N1) *
            countLeft * countRight)
 
while 1:
    n = int(input())
    if n == 0:
        break
    
    arr = list(map(int, input().split()))
    fact = [0] * n
 
    calculateFact(fact, n)
     
    print(countWays(arr, fact))