#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int num[10000][5][3];
int amount[10000];
bool relatively_prime(int a, int b , int c){
    for(int i = 2;i<=a;i++){
        if (a%i == 0){
            if(b % i ==0)return false;
            if(c % i == 0)return false;
        }
        else{
            if(b%i == 0 && c% i == 0) return false;
        }
    }
    for(int i =a+1;i<=b;i++){
        if(b%i == 0 && c% i == 0) return false;
    }
    return true;
}

int main(){
    int k= 10000,i,j,maxx=5;
    int dif=0;
    int dec = k-1;
for ( i=3;i<10000;i++){

        if(dec ==0)break;
    for(j=i+1;j<10000;j++){
        int x= i*i +j*j;
        double n = sqrt(x);
        if (n - int(n) == 0) {
                dif = int(n)-j;
                if(dif>= k) continue;
                if(amount[dif] == maxx) continue;
                if (relatively_prime(i,j,int(n))){
                    //cout<<i<<" "<<j<<"#"<<dif<<endl;
                    num[dif][amount[dif]][0] = i;
                    num[dif][amount[dif]][1] = j;
                    num[dif][amount[dif]][2] = int(n);

                    //cout<<i<<" "<<j<<" "<<int(n)<<endl;
                    //cout<<" @ "<<num[dif][amount[dif]][0]<<" "<<num[dif][amount[dif]][1]<<" "<<num[dif][amount[dif]][2]<<endl;

                    amount[dif]++;
                    if(amount[dif] == maxx)dec--;
                    //cout<<i<<" "<<j<<" "<<int(n)<<"@"<<dif<<" "<<amount[dif]<<" "<<dec<<endl;

                    }

        }
    }
}

ofstream outfile("pythagores3.txt");
for(int i=1;i<10000;i++){
    int s=amount[i];
    if (s==0)continue;
    outfile<<i<<endl<<"***********************"<<endl;
    for(int j=0;j<s;j++){
        for(int k=0;k<3;k++){
            outfile<<num[i][j][k]<<"  ";
        }
        outfile<<endl;
    }
    outfile<<"\n\n\n";
}
}

