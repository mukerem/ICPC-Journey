#include<iostream>
#include<vector>
using namespace std;
 vector<int> c;
  int n,m,a[500],b[1000];
int search(int k){
for(int i=0;i<n;i++){
    if(c[i]==k)return i;
}
return -1;
}
int calculate(){
int total=0;
for(int i=0;i<m;i++){
    int s=search(b[i]);
        for(int j=s+1;j<n;j++){
    total+=c[j];
}
c.erase(c.begin()+s);
c.push_back(b[i]);

}
return total;
}
int main(){
 while(cin>>n&&n!=-1&&cin>>m){
    vector <int> s;
    bool check;
    int k=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    for(int i=0;i<m;i++){
        if(k==n)break;
            check=false;
        for(int j=0;j<k;j++)
            if(s[j]==b[i]){
                check=true;
                break;
            }
            if(!check){
                s.push_back(b[i]);
                k++;
            }


    }
    for(int i=0;i<n;i++ ){
        int l=s[n-i-1];
        c.push_back(l);
    }
    cout<<calculate()<<endl;
     }
 }
