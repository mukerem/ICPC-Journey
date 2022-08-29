#include<bits/stdc++.h>
using namespace std;
char arr[101][101];
int main(){
    int w,h,c=0;
    float total = 0;
    cin>>h>>w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>arr[i][j];
                if(arr[i][j] != '.'){
                    total += j + 0.5;
                    c++;
                }
        }
    }
    float left, right, center = total / c;
    for(int i=0; i<w; i++){
        if(arr[h-1][i] != '.'){
            left = i + 0.5;break;
        }
    }
    for(int i=w-1; i>=0; i--){
        if(arr[h-1][i] != '.'){
            right = i +0.5;break;
        }
    }
    if(center < left)cout<<"left\n";
    else if(center > right) cout<<"right\n";
    else cout<<"balanced\n";
    //cout<<total<<" "<<c<<" "<<left<<" "<<right<<" "<<center;
    //cout<<endl<<h<<" "<<w<<endl;
}

