#include<bits/stdc++.h>
using namespace std;
long long t,n;
string str;
long long freq[16];
long long start[8];
long long first[8];
int mult[]={6,2,5,5,4,5,6,3,7,6,6,5,4,5,5,4};
int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>str;
        for(int k=0 ; k<16 ;k++) freq[k] = 0;
        for(int k=7 ; k>=0 ;k--){
            if( str[k] >='A')
                start[k] = (str[k]-55);
            else start[k] = (str[k]-48);
        }
        long long c=1;
         for(int k=7;k>=0;k--){
             first[k] = start[k]*c;
             c *= 16;
         }

//         for(int k=0;k<8;k++){
//           cout<<k<<" "<<first[k]<<endl;
//        }
        long long last = 0;
        long long multiplier = 16 , total = 0;
        for(int r=7 ; r>=0 ; r--){
            int starting_index = start[r];
            long long it = n;
            if( r!= 7) total += first[r+1];
            if(it>= multiplier/16 - total){
                freq[starting_index] += (multiplier/16 - total);
                starting_index = (starting_index+1)%16;
                it -= (multiplier/16 - total);
            }
            else{
                freq[starting_index] += it;
                starting_index = (starting_index+1)%16;
                it = 0 ;
            }

            int result = it/multiplier;
            for(int k=0 ; k<16 ;k++) freq[k] += result*(multiplier/16);

            int remainder = it%multiplier;

            while(remainder>0){
                //cout<<"yes "<<remainder;
                if(remainder >= multiplier/16){
                    freq[starting_index] += multiplier/16;
                    remainder -= multiplier/16;
                }
                else{
                    freq[starting_index] += remainder;
                    remainder = 0 ;
                }
                starting_index = (starting_index+1)%16;


            }
            //cout<<" @"<<multiplier/16 - total<<endl;
            multiplier *= 16;
//            for(int k=0;k<16;k++){
//                cout<<k<<" "<<freq[k]<<endl;
//                    }
//            for(int k=0;k<16;k++)
//           cout<<k<<"->"<<freq[k]<<"@";
//           cout<<endl;
            }
//       for(int k=0;k<16;k++)
//           cout<<k<<"->"<<freq[k]<<"@";
        long long ans = 0;
        for(int k=0;k<16;k++){
            ans += mult[k] * freq[k];
        }
        cout<<ans<<endl;
    }

}

