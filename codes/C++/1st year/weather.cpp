#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
int main(){
    ifstream in("weather1.txt");
    ofstream out("weather2.txt");
    float temp[24], minn, maxx, ave;
    out<<"Day\t\tMin.\tMax.\tAve\n";
    for(int i=0;i<7;i++){
        for(int j=0;j<24;j++){
            in>>temp[j];
        }
        sort(temp, temp+24);
        minn = temp[0];
        maxx= temp[23];
        float sum = 0;
        for(int j=0;j<24;j++)
            sum += temp[j];
        ave = sum/24;
        out<<i+1<<"\t\t"<<minn<<"\t\t"<<maxx<<"\t\t"<<ave<<endl;
    }
    in.close();
    out.close();

}
