#include<iostream>
using namespace std;
int r,c,w,h,t;
char str[66][66];
int main(){
    cin>>t;
    for(int u=0;u<t;u++){
        cin>>r>>c>>w>>h;
        int y = r * (h+1) +1;
        int x = c * (w+1) +1;

        for(int i = 0;i<y ;i++)
            for(int j=0;j<x;j++)
               str[i][j] = '*' ;

        for(int i=0;i<=y;i++){
            //str[i][0] = '+';
            if(i%(h+1) == 0){

                for(int j = 0;j<c;j++){

                    int g = j*(w+1);
                    str[i][g] = '+';
                    for(int k = 1;k<=w;k++)
                        str[i][g+k] = '-';

                }
                str[i][x-1] = '+';
            }
            else{
                for(int j = 0;j<x;j += (w+1)){
                    str[i][j] = '|';
                }

            }
        }

        cout<<"Case #"<<u+1<<":"<<endl;
        for(int i=0;i<y;i++){
            for(int j=0;j<x;j++)cout<<str[i][j];
            cout<<endl;
        }
    }

}
