def coin_change_sub(coins, amount, solutions):
    if amount < 0:
        return -1
    if amount == 0:
        return 0

    if solutions[amount - 1] != 0:
        return solutions[amount - 1]

    optimal_solution = float('inf')

    for coin in coins:
        best_solution_for_coin = coin_change_sub(coins, amount - coin, solutions)
        if 0 <= best_solution_for_coin < optimal_solution:
            optimal_solution = best_solution_for_coin + 1

    if optimal_solution == float('inf'):
        solutions[amount - 1] = -1
    else:
        solutions[amount - 1] = optimal_solution

    return solutions[amount - 1]

n,m = map(int, input().split())
a = [int(i) for i in input().split()]
b = coin_change_sub(a, m, [0] * m)
print(b)
