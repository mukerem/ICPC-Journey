#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
void prime_generate(){
    prime.push_back(2);
    for(int n = 3; n<1000; n+=2){
        bool s = true;
        for(int j = 2; j*j<= n; j++)
            if(n%j == 0){
                s = false;
                break;

            }
        if(s)prime.push_back(n);
    }

}

int root(int a[], int x){
    while(a[x] != x)x=a[x];
    return x;
}
void merge(int a[], int x, int y){
    int u = root(a, x);
    int v = root(a, y);
    a[u] = v;
}

int main(){
    prime_generate();
    reverse(prime.begin(), prime.end());
    int t,a,b,p;
    cin>>t;
    int order = 1;
    while(t--){
        cin>>a>>b>>p;
        int count = 0;
        int n = b-a+1;
        int num[n];
        int setx[b+1];
        for(int i=0; i<=b; i++)setx[i]=i;
        for(int i=0; i<n; i++)num[i] = a+i;
        int R, S;
        for(int i = 0; i<n; i++){
            vector<int> x;
            R = num[i];
            for(auto u: prime){
                if (u < p)break;
                if(R % u == 0)x.push_back(u);
            }
            reverse(x.begin(), x.end());
            for(int j=i+1; j<n; j++){
                S = num[j];
                for(auto u: x){
                    if(u > S)break;
                    if(S%u == 0){
                        merge(setx, S, R);
                        break;
                    }
                }
            }
        }
        set<int> vec;
        for(int i=a; i<= b; i++){
         //cout<<i<<" "<<setx[i]<<endl;
         vec.insert(root(setx, i));
         }
        cout<<"Case #"<<order<<": "<<vec.size()<<endl;
        order++;
    }
}
