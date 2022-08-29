#include<bits/stdc++.h>
using namespace std;
int deno[100];
int table[1000005];

long long greedy(int n, int V){
    int i = n - 1;
    int tot = 0;

    while(i >= 0){
        if (V >= deno[i]){
            tot += V / deno[i];
            V = V % deno[i];
        }

        i -= 1;
    }
     return tot;
}

int minCoins(int m, int V){
    table[0] = 0;
    for (int i=1; i < V + 1; i++)
        table[i] = INT_MAX;
    int sub_res;
    for (int i=1; i < V + 1; i++)
        for (int j=0; j<m; j++)
            if (deno[j] <= i){
                sub_res = table[i - deno[j]];
                if (sub_res != INT_MAX && sub_res + 1 < table[i]){
                    table[i] = sub_res + 1;
                }
            }
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>deno[i];
    long long y = deno[n-1]/deno[n-2];
    if(deno[n-1] % deno[n-2] != 0)y++;
    y *= deno[n-2];

    minCoins(n, y);
    int a,b;
    for (int i=0; i<n; i++){
        y = deno[i+1]/deno[i];
        if(deno[i+1] % deno[i] != 0)y++;
        y *= deno[i];
        a = greedy(n, y);
        b = table[y];
        if (a != b){
            cout<<"non-canonical";
            return 0;
        }
    }
    cout<<"canonical";
}
