#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,q;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
cin>>q;
int b[q];
for(int i=0;i<q;i++){
        cin>>b[i];
        for (int k=0;k<n-1;k++){
            if(a[k]<=b[i]&&a[k+1]>=b[i])
            {
                int m=k;
                int t=k+1;
                while(true){
                    if(a[m]<b[i]){
                        cout<<a[m]<<" ";
                        break;
                    }
                    m--;
                    if(m<0){
                       cout<<"X ";
                        break;
                    }
                }

                while(true){
                    if(a[t]>b[i]){
                        cout<<a[t]<<endl;
                        break;
                    }
                    t++;
                    if(t>n){
                       cout<<"X"<<endl;
                        break;
                    }
                }
                break;
            }
        }
        if(a[n-1]<=b[i]){
            int m=n-1;
                while(true){
                    if(a[m]<b[i]){
                        cout<<a[m]<<" ";
                        break;
                    }
                    m--;
                    if(m<0){
                       cout<<"X ";
                        break;
                    }
                }
                cout<<"X"<<endl;
        }
        else if(a[0]>=b[i]){
                int t=0;
            cout<<"X "<<endl;
            while(true){
                    if(a[t]>b[i]){
                        cout<<a[t]<<endl;
                        break;
                    }
                    t++;
                    if(t>n){
                       cout<<"X"<<endl;
                        break;
                    }
                }
        }
}

}
