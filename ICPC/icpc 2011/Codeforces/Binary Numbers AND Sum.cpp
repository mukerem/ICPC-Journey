#include<iostream>
#include<algorithm>
using namespace std;
int a[200005];
bool b[200005];
const int MAX = 998244353;
string str;
int n,m,x ,start = 2;
int main(){
    cin>>n>>m;
    cin>>str;
    if(str[n-1] == '1')a[0] = 1;
    for(int i=1;i<n;i++){
        if(str[n - i-1] == '1'){
            a[i] = ((a[i-1]) % MAX + start % MAX) % MAX;
        }
        else{
            a[i] = a[i-1];
        }
        start = (start * 2) % MAX;
    }
    for(int i=n;i<m;i++){
        a[i] = a[n-1];
    }
    cin>>str;
    for(int i=0;i<m;i++){
        if (str[m-i-1] == '1') b[i] =1;
    }

    int sum = 0;
    for(int i = 0;i<m;i++){
        if (b[i])
            sum = (sum% MAX + a[i] % MAX) % MAX;

    }
//     for(int i=0;i<m;i++){
//       cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<m;i++){
//       cout<<b[i]<<" ";
//    }
    cout<<sum<<endl;

}

