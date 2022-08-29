/**
 * Solution based on the idea of A. D.
 *
 * We will need two queues, one for each kind of steel.
 *
 * For each part, we determine the type of steel for which the part generates
 * the best profit and we put the part in the corresponding queue. After that,
 * for each of the two rods (the one with the lower stock first) we compute the
 * profit each part in the queue will generate with the current stock. Then we
 * choose the part which generates more profit and we produce the maximum of
 * pieces.
 *
 * We continue this process with the rest of the stock and the other parts in
 * the queue until we can't produce no more parts. At this point, if parts
 * remain in the queue, we put these parts in the second queue and the restart
 * the process with the second queue.
 *
 * Notes:
 * 1. To cite Per Austrin, the code below may be generally difficult to read.
 * 2. This program got `Wrong Answer` on ICPC Live Archive.
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

typedef struct Part {
    int length, steelProfit, stainlessProfit;
    int profit, quantity;
    int bestProfit, smallProfit;
} Part;

inline bool operator < (const Part &p, const Part &other) {
    return (p.profit <  other.profit);
}

/**
 * Compute the profit generated by a queue of parts given a stock.
 * The param q is pair formed by an integer (the stock) and a vector of Parts.
 */
int getProfit(pair<int, vector<Part>> q)
{
    int profit = 0;
    int &stock = q.first;
    vector<Part> &queue = q.second;

    while (!queue.empty()) {
        /* We compute the profit for each parts. */
        for_each(queue.begin(), queue.end(), [&stock] (Part &p) {
                    p.quantity = stock / p.length;
                    p.profit = p.quantity * p.bestProfit;
        });
        make_heap(queue.rbegin(), queue.rend(), less<Part>());
        Part p = queue.back();
        if (p.profit > 0) {
            profit += p.profit;
            stock  %= p.quantity;
            queue.pop_back();
        } else {
            /* No more profit to make. We are done with the queue. */
            break;
        }
    }

    return profit;
}

int main()
{
    int n, profit;
    pair<int, vector<Part>> steel, stainless;
    Part p;

    while(cin >> n && n != -1) {
        /* We get data on parts and put them in the appropriate queue. */
        for (int i = 0; i < n; ++i) {
            cin >> p.length >> p.steelProfit >> p.stainlessProfit;
            if (p.steelProfit > p.stainlessProfit) {
                p.bestProfit  = p.steelProfit;
                p.smallProfit = p.stainlessProfit;
                steel.second.push_back(p);
            } else {
                p.bestProfit  = p.stainlessProfit;
                p.smallProfit = p.steelProfit;
                stainless.second.push_back(p);
            }
        }
        cin >> steel.first >> stainless.first;

        /* We determine the order of processing (lower stock first). */
        auto q = minmax({ steel, stainless });
        profit = getProfit(q.first);

        /* We put the remaining parts in the second queue and we change */
        /* the `bestProfit` property in each of them. */
        for_each(q.first.second.begin(), q.first.second.end(), [] (Part &p) {
            swap(p.bestProfit, p.smallProfit);
        });
        q.second.second.insert(q.second.second.end(), q.first.second.begin(),
                               q.first.second.end());
        profit += getProfit(q.second);

        cout << profit << endl;

        // We should clear the queues for next test case. */
        steel.second.clear();
        stainless.second.clear();
    }

    return 0;
}
