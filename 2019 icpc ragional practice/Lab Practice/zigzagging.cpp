#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[50], n;
    cin>>n;
    for(int i=0; i<n;i++)cin>>s[i];
    int length[n][2];
    for (int k = 0; k < n; k++)
    {
        length[k][0] = 1;
        length[k][1] = 1;
        for (int i = 0; i < k; i++)
        {
            if (s[i] < s[k])
            {
                length[k][0] = max(length[k][0],length[i][1]+1);
            }
            else if(s[i] > s[k]){
                length[k][1] = max(length[k][1],length[i][0]+1);
            }
        }
    }
    int m = -1;
    for(int i=0; i<n; i++){
            m = max(m, length[i][0]);
            m = max(m, length[i][1]);
    }
    cout<<m;
}

