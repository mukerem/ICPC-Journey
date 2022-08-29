#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");
bool check(long long x){

            while(x>0){
                int r=x%10;
                if (r==0||r==2||r==6||r==8)return true;
                x=x/10;
            }
return false;
}
int main(){
 string a;
 long long b;
srand(time(0));
int k=1000000;
while(k-->0){
        do{
            b=rand()%int(pow(10,18));
        }while(check(b));
infile<<b<<endl;
    stringstream s;
    s<<b;
        a=s.str();
      unsigned long long  sum=0,i=0;
        while(i!=a.length()){
            char k=a[a.length()-i-1];
            if(k=='1')sum+=1*(long long)pow(6,i);
            else if(k=='3')sum+=2*(long long)pow(6,i);
            else if(k=='4')sum+=3*(long long )pow(6,i);
            else if(k=='5')sum+=4*(long long)pow(6,i);
            else if(k=='7')sum+=5*(long long)pow(6,i);
           else sum+=6*(long long)pow(6,i);
           i++;
        }

            outfile<<sum-1<<endl;


}
}


