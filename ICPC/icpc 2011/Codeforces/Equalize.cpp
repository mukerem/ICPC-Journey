#include<iostream>
#include<string>
using namespace std;
string a,b;
int n;
int main(){
    cin>>n;
    cin>>a>>b;
    int cost = 0;
    a += "0";
    b += "0";
    for(int i=0;i<n ;i++){
        if (a[i] != b[i]){
            if(a[i+1] != b[i+1]){
                if (a[i] != a[i+1])
                    cost++;
                else{
                    cost++;
                    i--;
                }
            }
            else cost++;
             i++;
        }
        //cout<<i<<" "<<cost<<endl;
    }
    cout<<cost<<endl;
}
