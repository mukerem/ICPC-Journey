#include<iostream>
#include<algorithm>
using namespace std;

int L,l,v,r,t;
int main(){
    cin>>t;
    while(t--){
        cin>>L>>v>>l>>r;
        int total  = L/v;
        //l -= l%v;
        r -= r%v;
        int rem;
        if (l>r) rem = 0;
         else rem= (r-l)/v+1 ;
        cout<<total - rem<<endl;
    }

}
