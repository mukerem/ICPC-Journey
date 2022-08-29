#include<bits/stdc++.h>
using namespace std;
long long mat[105][105];
int main()
{
    int n,t;
    string z,aa,bb;
    cin>>t;
    int abc = 1;
    while(t--)
    {
        cin>>aa>>bb>>n;
        string result = "Symmetric";
        bool c = true;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>mat[i][j];
            }
        }
        if( n%2 == 1)
        {
            int x = n/2;
            for(int i=0; i<=x &&c; i++)
            {
                for(int j=0; j<=x &&c; j++)
                {
                    if(mat[x + i][x+j]<0 || mat[x - i][x - j]<0 ||mat[x - i][x+j]<0 ||mat[x + i][x-j]<0 )
                        {
                        result = "Non-symmetric";
                        c=false;
                    }
                    else if(mat[x + i][x+j] != mat[x-i][x-j])
                    {
                        result = "Non-symmetric";
                        c=false;
                    }
                    else if(mat[x + i][x - j] != mat[x-i][x + j])
                    {
                        result = "Non-symmetric";
                        c=false;
                    }
                }

            }
        }
        else{
            float x = double(n-1)/2;
            for(float i=0.5; i<=x &&c; i++)
            {
                for(float j=0.5; j<=x &&c; j++)
                {
                    if(mat[int(x + i)][int(x+j)] <0 || mat[int(x - i)][int(x-j)] <0 || mat[int(x - i)][int(x+j)] <0 || mat[int(x + i)][int(x-j)] <0)
                        {
                        result = "Non-symmetric";
                        c=false;
                    }
                    else if(mat[int(x + i)][int(x+j)] != mat[int(x-i)][int(x-j)])
                    {
                        result = "Non-symmetric";
                        c=false;
                    }
                    else if(mat[int(x + i)][int(x - j)] != mat[int(x-i)][int(x + j)])
                    {
                        result = "Non-symmetric";
                        c=false;
                    }
                }

            }

        }
        cout<<"Test #"<<abc++<<": "<<result<<"."<<endl;
    }

}
