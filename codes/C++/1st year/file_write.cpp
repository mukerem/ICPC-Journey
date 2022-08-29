#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int test1, test2, mid, Final;
    int total;
    float ave;
    ofstream out("mark");
    out<<"Test1\tTest2\tMid\tFinal\tTotal\tAverage\n";

    for(int i=0;i<3;i++){
        cin>>test1>>test2>>mid>>Final;
        total = test1+test2+mid+Final;
        ave = total/4.0;
        out<<test1<<"\t\t"<<test2<<"\t\t"<<mid<<"\t\t"<<Final<<"\t\t"<<total<<"\t\t"<<ave<<endl;
    }
    out.close();
}
