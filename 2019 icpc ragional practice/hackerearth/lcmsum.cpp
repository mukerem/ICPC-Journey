#include <iostream>
#include <math.h>

using namespace std;

#define FOR(i, L, U) for(int i=(int)L; i<=(int)U; i++)
#define FORD(i, U, L) for(int i=(int)U; i>=(int)L; i--)

#define READ(x) freopen(x, "r", stdin)
#define WRITE(x) freopen(x, "w", stdout)

#define PB push_back

typedef unsigned long long ULL;

inline int src() { int ret; scanf("%d", &ret); return ret; }

#define MAX 1000000

ULL phi[MAX + 7];
ULL res[MAX + 7];

void generatePhi() {
    phi[1] = 1;
    for (int i = 2; i <= MAX; i++) {
        if (!phi[i]) {
            phi[i] = i - 1;
            for (int j = (i << 1); j <= MAX; j += i) {
                if (!phi[j]) phi[j] = j;
                phi[j] = phi[j] * (i-1) / i;
            }
        }
    }
}

void preCal() {
    for (int i = 1; i <= MAX; ++i) {
        for (int j = i; j <= MAX; j += i) {
            res[j] += (phi[i] * i);
        }
    }
}

ULL solve(int n) {
    ULL ret = res[n];
    ret += 1;
    ret = ret * n / 2;
    return ret;
}

int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    int i, j, k;
    int TC, tc;
    double cl = clock();

    TC = src();

    generatePhi();
    preCal();

    int n;

    FOR(tc, 1, TC) {
        n = src();
        printf("%llu\n", solve(n));
    }

    cl = clock() - cl;
    fprintf(stderr, "Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);

    return 0;
}
