#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin>>x;
    string a="g++ "+x+".cpp -o ab.exe";
    string b="ab.exe";

    char d[a.length()+1],e[b.length()+1];
    strcpy(d,a.c_str());
    strcpy(e,b.c_str());

    //for(int i=0;i<a.size();i++)
    //d[i]=a[i];
    //d[a.size()]='\0';
    //    for(int i=0;i<b.size();i++)
    //    e[i]=b[i];
    //    e[b.size()]='\0';
    system(d);
    system(e);
}
