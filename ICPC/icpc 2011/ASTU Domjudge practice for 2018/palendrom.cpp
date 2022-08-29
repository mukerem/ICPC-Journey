#include<bits/stdc++.h>
using namespace std;
map<int, long long> word ;
long long ans=0;
void string_check(string str){

    int bin=0;
    for(unsigned int i=0;i<str.size();i++){
        bin = bin ^ 1<<(str[i] - 97);
    }
    long long add = word[bin];
    ans += add;
    long long k=1;
    for(int i=1;i<=26;i++){
        ans += word[bin ^ k];
        k = k*2;
    }
    word[bin] = ++add;
}

int main(){
int n;
cin>>n;
string str;
for(int i=0;i<n;i++){
    cin>>str;
    string_check(str);
}
cout<<ans<<endl;
//for(int i=0;i<word.size();i++)
//    if (word[i])
//    cout<<i<<" "<<word[i]<<endl;
//string str = "15";
//int n= stoi(str);
//cout<<n;
//for (int i=0;i<100000;i++){
//    stringstream ss;
//    ss << i;
//    st.push_back(ss.str());
    //st.insert(ss.str(),5);
//}
//cout<<st.at(100);

}
