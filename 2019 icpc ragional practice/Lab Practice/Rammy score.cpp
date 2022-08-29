#include<bits/stdc++.h>
using namespace std;
int ele[7], card=6;
int pro[210], inc=0;
int total = 0;
vector<int> subset;
void search(int k, int n)
{
    if (k == card)
    {
        if(count(subset.begin(), subset.end(), subset[0]) == n){
            int a = 0;
                for(auto x: subset) a+=x;
            pro[inc++]= (total - a);
        }
        else{
                bool c= true;
            for (int i=0; i<subset.size()-1; i++){
                if(abs(subset[i] - subset[i+1]) != 1){
                    c=false;
                    break;
                }
            }
            if(c){
                int a = 0;
                for(auto x: subset) a+=x;
                pro[inc++]= (total - a);
            }
        }
    }
    else
    {
        search(k+1, n);
        subset.push_back(k);
        search(k+1, n);
        subset.pop_back();
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        total=0;
        inc=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ele[i];
            total += ele[i];
        }
        for(int i=3; i<=7 ;i++){
            search(0, i);
        }

    }
    sort(pro, pro+210);
    cout<<pro[0]<<endl;

}
