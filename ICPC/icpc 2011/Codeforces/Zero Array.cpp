#include<iostream>
#include<map>
using namespace std;
int arr[100005];
map<int, int>num;
int main(){
    long long ans,t,n,x,q,p,v,c,value;
    cin>>t;

    for(int i=0;i<t;i++){
        num.clear();
        cin>>n>>q;
        for(int k=0;k<n;k++){
            cin>>x;
            arr[k] = x;
            if(x != 0){
                    num[x]++;
            }

        }
        for(int k=0;k<q;k++){
            ////////////////
//            map<int , int > ::iterator it;
//            for (it = num.begin(); it != num.end(); ++it)
//            {
//                cout  <<  '\t' << it->first
//                      <<  '\t' << (it->second) << '\n';
//            }
            //////////////
            cin>>c;
            if (c == 2){
                cout<<num.size()<<endl;
            }
            else{
                cin>>p>>v;
                p--;
                value = arr[p];
                arr[p] = v;
                if(value != 0){
                    if (num[value] == 1) num.erase (value);
                    else num[value]--;
                }
                if(v != 0) num[v]++;
            }
        }
    }
}


