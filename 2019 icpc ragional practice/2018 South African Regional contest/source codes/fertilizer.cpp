#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[4][3];
int main(){
//    cout<<fixed<<setprecision(1)<<40.0/10<<endl;
    //cout<<-19%5<<-19%-5<<19%-5<<endl;
    int a,b,c,n;
    ll x,y,z;
    while(cin>>n && n!=-1){
        for(int i = 0; i<n ;i++){
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        }
        cin>>a>>b>>c;
        bool ok = 1;
        if(n == 2){
            for(int i = 0; i<=50 && ok; i++){
                for(int j = 0; j<= 50 && ok; j++){
                    x = i * arr[0][0] + j * arr[1][0];
                    y = i * arr[0][1] + j * arr[1][1];
                    z = i * arr[0][2] + j * arr[1][2];
                    if(double(x)/ double(a) == double(y)/ double(b) && double(x)/ double(a) == double(z)/ double(c) && (i+j > 0)){
                        cout<<"yes\n";
                        //cout<<i<<" "<<j<<" "<<endl;
                        ok = 0;
                    }
                }
            }
        }
        else if(n == 3){
            for(int i = 0; i<=50 && ok; i++){
                for(int j = 0; j<= 50 && ok; j++){
                    for(int k = 0; k<= 50 && ok; k++){
                        x = i * arr[0][0] + j * arr[1][0] + k * arr[2][0];
                        y = i * arr[0][1] + j * arr[1][1] + k * arr[2][1];
                        z = i * arr[0][2] + j * arr[1][2] + k * arr[2][2];
                        if(double(x)/ double(a) == double(y)/ double(b) && double(x)/ double(a) == double(z)/ double(c) && (i+j+k > 0)){
                            cout<<"yes\n";
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            ok = 0;
                        }
                    }
                }
            }
        }
        else{
            for(int i = 0; i<=50 && ok; i++){
                for(int j = 0; j<= 50 && ok; j++){
                    for(int k = 0; k<= 50 && ok; k++){
                        for(int l = 0; l<= 50 && ok; l++){
                            x = i * arr[0][0] + j * arr[1][0] + k * arr[2][0] + l * arr[3][0];
                            y = i * arr[0][1] + j * arr[1][1] + k * arr[2][1] + l * arr[3][1];
                            z = i * arr[0][2] + j * arr[1][2] + k * arr[2][2] + l * arr[3][2];
                            if(double(x)/ double(a) == double(y)/ double(b) && double(x)/ double(a) == double(z)/ double(c) && (i+j+k+l > 0)){
                                cout<<"yes\n";
                                //cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                                ok = 0;
                            }
                        }
                    }
                }
            }
        }
        if(ok)cout<<"no\n";
    }
}
