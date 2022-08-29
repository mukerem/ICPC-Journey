number_dictionary = {1: 'one ', 2: 'two ', 3: 'three ', 4: 'four ', 5: 'five ',
              6: 'six ', 7: 'seven ', 8: 'eight ', 9: 'nine ', 10: 'ten ',
              11: 'eleven ', 12: 'twelve ', 13: 'thirteen ', 14: 'fourteen ',
              15: 'fifteen ', 16: 'sixteen ', 17: 'seventeen ',
              18: 'eighteen ', 19: 'ninteen ', 20: 'twenty ', 30: 'thirty ',
              40: 'fourty ', 50: 'fifty ', 60: 'sixty ', 70: 'seventy ',
              80: 'eighty ', 90: 'ninety ', 100: 'hundred '}
multiplier = [' ','thousand ','million ',  'billion ', 'trillion ']
def to_word(n):
    if n == 0:
        return ''
    elif n in number_dictionary:
        return number_dictionary[n]
    elif n >= 100:
        return number_dictionary[n/100]+ 'hundred ' + to_word(n%100)
    else:
        return number_dictionary[n - n%10]+ to_word(n%10)
num = input()
num_list = []
while num:
    a = num%1000
    num_list.append(a)
    num /= 1000
num_list.reverse()
k = len(num_list)-1
print num_list
for i in num_list:
    print to_word(i) + multiplier[k], 
    k -= 1
