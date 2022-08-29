#include<bits/stdc++.h>
using namespace std;
int ch[10];
long long toNum(int s){
    long long sum = 0;
    for (int i = 0 ; i < s ; i++){
        sum += (int) pow(float(10) , (float) i);
    }
        return sum;

}

int fac(int n){
    if (n==0 || n==1){
        return 1;
    }
    else return n*fac(n-1);
}
int main(){
int n;
cin>>n;

for (int i=0;i<n;i++){
     for (int j=0;j<10;j++) ch[j] = 0;
    string s;
    cin>>s;
    for (int j=0;j<s.length() ; j++){
        ch[s[j]-48 ] ++;
    }
    int per = fac(s.size());
    for (int k=0;k<10;k++){
        per /= fac(ch[k]);
    }
    long long ans = 0, digit = toNum(s.size());
    for (int k = 0 ; k < 10 ; k++){
        ans += k * digit * per * ch[k] / s.size()  ;
    }
    cout<<per<<" "<<ans<<endl;
}
}
