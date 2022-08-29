def max_subarray(A):
    max_ending_here = max_so_far = A[0]
    for x in A[1:]:
        max_ending_here = max(x, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far
def max_subarray_index(A):
    
    max_ending_here = max_so_far = A[0]
    start = end = 0
    ans_start = ans_end = 0
    c = 1
    for x in A[1:]:
        if max_ending_here < 0:
            max_ending_here = x
            start = end = c
        else:
            max_ending_here += x
            end += 1
        #max_ending_here = max(x, max_ending_here + x)
        # max_so_far = max(max_so_far, max_ending_here)
        
        if max_ending_here > max_so_far:
            max_so_far = max_ending_here
            ans_start = start
            ans_end = end
        c += 1
    return [max_so_far , ans_start , ans_end ]
num = [-2, 1 , -3 , 4 ,-1 , 2 , 1 , -5 ,4]
num = -2, -5, 6, -2, -3, 1, 5, -6
ans = max_subarray_index(num)
print 'The max. sub array is ',max_subarray(num)
print 'The max. sub array is ',ans[0],' that is found between index ',ans[1],' and ',ans[2] 
