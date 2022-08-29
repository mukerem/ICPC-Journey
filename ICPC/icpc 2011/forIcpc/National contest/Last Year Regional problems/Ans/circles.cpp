
/*#include<bits/stdc++.h>
using namespace std;
int n,l;
double r,pi = 3.14159265358979323846;
int main(){
    while(cin>>n&&n!=-1){
        cin>>l;
        r = float(l)/(tan(pi/float(n)));
        cout<<fixed<<setprecision(3)<<r<<endl;
    }
}
*/
#include <bits/stdc++.h>

using namespace std;

bool isprime(long  n){
    for(long i=2; i<=n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    long long t, a, b;
    cin>>t;
    for(long i=0; i<t; i++){
        cin>>a>>b;
        long area=0;
        area=a*(a-b);
        area+= (b*(a-b));

        if(isprime(area))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        cout<<area;

    }

}
