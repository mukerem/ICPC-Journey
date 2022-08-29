import math

def findDigits(n): 
      
    if (n < 0): 
        return 0; 
  
    if (n <= 1): 
        return 1; 
    digits = 0; 
    for i in range(2, n + 1): 
        digits += math.log10(i); 
  
    return math.floor(digits) + 1; 
while True:
    try:
        n = int(input())
        if n == 0:
            print(1)
        else:
            print(findDigits(n))

    except EOFError:
        break
