#include<bits/stdc++.h>
#include<map>
using namespace std;
int n,x,left_most = 0, right_most = 0;
map<int , int>left_book,right_book;
char str;
int a,b;
int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str>>x;
        if(str == 'L'){
            left_most++;
            left_book[x] = left_most;

        }
        else if(str == 'R'){
            right_most++;
            right_book[x] = right_most;

        }
        else{
            int index = left_book[x];

            if(index){
                a = left_most - index ;
                b = right_most + index -1;
                cout<<min(a,b)<<endl;
            }
            else{
                index = right_book[x];
                a = right_most - index ;
                b = left_most + index -1;
                cout<<min(a,b)<<endl;

            }

        }

    }
//        for( auto it : left_book )
//            cout<<(it.first)<<" "<<it.second<<endl;cout<<endl;
//        for( auto it : right_book ) cout<<it.first<<" "<<it.second<<endl;

}



