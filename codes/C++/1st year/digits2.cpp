#include<iostream>
#include<string>
using namespace std;
int digits (char*);
int main()
{
    char word[20] ;
    cin>>word;
    cout<<digits(word);
}
int digits (char *c){
    int s = sizeof(c)/sizeof(c[0]);
            cout<<sizeof(c)<<endl;
    for(int i=0; i<s;i++){
        if (c[i] >= '0' && c[i] <= '9')
            return 1;
    }
    return 0;
}
