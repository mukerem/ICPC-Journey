#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string b;

    int t;
    cin>>t;

    for(int k=0;k<t;k++)
        {


        cin>>a>>b;
        int n=a.length();
        int aa[n];
        bool length=false;
        if(n==b.length()){length=true;}
        if(length==true)
            {


            for (int i=0;i<n;i++)
            {
                int cnt=0;
                for(int j=0;j<n;j++)
                    {
                    if (a[j]==b[i])
                        {
                            //cout<<"tr";
                        cnt++;
                        }
                    if(a[j]==b[i] && a[j]==a[j+1])
                        {
                        cnt--;
                        }
                    }
                //cout<<cnt;
                aa[i]=cnt;
            }
            bool fact=true;
            for(x : aa)
                {
                if (x==0 || x>=2)
                    {
                    fact=false;
                    }
                }
            if (fact==true)
                {
                cout<<"Yes"<<endl;
                }else{cout<<"No."<<endl;}


            }else{cout<<"No."<<endl;}


        }
}

