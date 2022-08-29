#include<iostream>
#include<vector>
using namespace std;
vector<int> b;
long long a[2000];
int mini(){
    int m = a[b[0]];
    int r=b[0];
    for(int i=1;i<b.size();i++){
            if(m>a[b[i]]){
                m=a[b[i]];
                r=b[i];
            }
    }
    return r;
}
int main(){
long long n,k;
cin>>n>>k;
for (int i=0;i<n;i++){
    cin>>a[i];
    if (b.size()<k)b.push_back(i);
    else{
        int q = mini();
        b.erase(b.begin() + q);
        b.push_back(i);
        cout<<q<<" "<<a[q]<<endl;
    }
}
long long sum=0;
for (int i=0;i<b.size();i++){
    sum+=b[i];
}
cout<<sum<<endl;
int i;
for ( i=0;i<b.size()-1;i++){
    cout<<b[i+1]-b[i]<<" ";
}
    cout<<n-b[i]<<" ";

}
