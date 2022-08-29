#include <algorithm>
#include <iostream>
#include <string>
long long a,b[200000],c=0,minn,total;
 using namespace std;
bool  comb(long long N,long long K)
{
    std::string bitmask(K, 1);
    bitmask.resize(N, 0);


    do {
        total=0;
        for (int i = 0; i < N; ++i)
        {
            if (bitmask[i])total+=b[i];
        }
        minn=minn>abs(c-2*total)?abs(c-2*total):minn;
        if(minn==0){
            cout<<0<<endl;
        return true;
        }
    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
    return false;
}


int main(){
    bool m=false;
while(cin>>a&&a!=-1){
        c=0;
for(int i=0;i<a;i++){
    cin>>b[i];
    c+=b[i];
}
sort(b,b+a);
minn=c-b[0];
 int i;
for( i=1;i<a;i++){
    long long t=0,r=0;
    for(int n=0;n<i;n++){
            t+=b[n];
            r+=b[a-n-1];
    }
if(c-2*t<minn||c-2*r>minn){
m=comb(a,i);
if(m)break;
}
}
if(!m)cout<<minn<<endl;
}}


