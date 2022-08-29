#include<iostream>
#include<cmath>
using namespace std;
long long t,n,m;
int main(){
        cin>>n>>m;
        t= ceil((1.0+sqrt(1 + 8* m))/2.0000);
        if (m == 0) t=0;
        long long maxx = n-t;
        long long minn = n- 2*m;
        if (minn<0) minn = 0;
        cout<<minn<<" "<<maxx<<endl;

}




