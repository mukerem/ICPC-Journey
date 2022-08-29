#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int mm[]={4,5,8};cout<<mm.size()<<endl;
    string str="254";
    cout<<6+stoi(str.c_str())<<endl;
    //tolower(str);
    cout<<2*atoi(str.c_str())<<endl;
    int i2 = atoi(str.c_str());
//converting integer to string
int i = 42;
cout<<to_string(i) + "024"<<endl;
//stringstream ss;
//ss << i;
//alternative method
//for converting integer to string
//string s = ss.str();
string numStr = to_string(i);
    string s;
    cin>>s;
    int n = s.size();
    int length[n];
    for (int k = 0; k < n; k++)
    {
        length[k] = 1;
        for (int i = 0; i < k; i++)
        {
            if (s[i] < s[k])
            {
                length[k] = max(length[k],length[i]+1);
            }
        }
    }
    int m = -1;
    for(int i=0; i<n; i++)m = max(m, length[i]);
    if (m>26)cout<<0;
    else
        cout<<26-m;
}
