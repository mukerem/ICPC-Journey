# Time: 2022-08-26 09:23:33
# title: Counting Triangles
# language: Python 3


def ccw(A,B,C):
    return (C[1]-A[1]) * (B[0]-A[0]) > (B[1]-A[1]) * (C[0]-A[0])

def intersect(A,B,C,D):
    if B[0] == A[0] and D[0] == C[0]:
        return False
    if  not(B[0] == A[0] or D[0] == C[0]):
        s1 = (B[1] - A[1]) / (B[0] - A[0])
        s2 = (D[1] - C[1]) / (D[0] - C[0])
        if abs(s1) == abs(s2):
            return False
    return ccw(A,C,D) != ccw(B,C,D) and ccw(A,B,C) != ccw(A,B,D)
    
while 1:
    n = int(input())
    if n == 0:
        break
    ap = []
    for i in  range(n):
        b = tuple(map(float, input().split()))
        ap.append((b[:2], b[2:]))
    z = 0
    for i in range(n):
        for j in range(i+1, n):
            for k in range(j+1, n):
                a = ap[i]
                b = ap[j]
                c = ap[k]
                if intersect(*a, *b) and intersect(*c, *b) and intersect(*a, *c):
                    z += 1
    print(z)
