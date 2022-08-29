MAX = 10e10
def minCoins(coins, m, V): 
	if (V == 0): 
		return 0
	res = MAX
	for i in range(0, m): 
		if (coins[i] <= V): 
			sub_res = minCoins(coins, m, V-coins[i]) 
			if (sub_res != MAX and sub_res + 1 < res): 
				res = sub_res + 1
	return res 
coins = [int(i) for i in raw_input("Enter the coins list separate by space: ").split()] 
m = len(coins) 
V = input("Enter the value: ")
print "Minimum coins required is",minCoins(coins, m, V) 

