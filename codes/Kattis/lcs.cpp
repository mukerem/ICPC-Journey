#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
int arr[MAXN], lcs[MAXN], v[MAXN];
stack<int>values;
vector<int>vv;
int main()
{

    int x, n, i, max_lcs;
    while(cin>>n && n!=0)
    {
        for( i = 0; i<n ; i++)
            cin>>arr[i];
        for(int k = 0; k<n; k++)
        {
            lcs[k] = 1;
            v[k] = -1;
            for(int i = 0; i< k; i++)
            {
                if(arr[i]< arr[k]){
                    if(lcs[i] + 1 >= lcs[k] ){
                        lcs[k] = lcs[i]+1;
                        if(v[k] == -1)v[k] = i;
                        else if(arr[i] < arr[v[k]] )v[k] = i;

                    }
                }
                    lcs[k] = max(lcs[k], lcs[i] + 1);
            }
        }


    int maximum_value = *max_element(lcs, lcs + n);
        int max_value = -1;
        for(i = 0; i<n; i++)
        {
            if(lcs[i] == maximum_value)
            {
                vv.push_back(arr[i]);
            }
        }
        //cout<<"/// "<<vv.size()<<endl;
        vector<int> ans[vv.size()];
        bool ch[vv.size()] = {false};
        //for(auto u: ch)cout<<u<<" * ";cout<<"\n";

        //cout<<maximum_value<<" ";
        int k = 0;
        for(auto u: vv)
        {
            max_lcs = maximum_value;
            max_value = u;
            values.push(max_value);
            for(i = n-1; i>= 0; i--)
            {
                if(lcs[i] + 1 == max_lcs && arr[i] < max_value)
                {
                    max_value = arr[i];
                    max_lcs = lcs[i];
                    values.push(max_value);
                }
            }
            while(!values.empty())
            {

                ans[k].push_back(values.top());
                values.pop();
            }
            k++;
        }


        for(auto u: ans)
        {
            for (auto w: u)
                cout<<w<<" ";
            cout<<"\n";
        }
        cout<<"**\n";

        for(k = 0; k<maximum_value; k++){
        int minn = 1000000000;
        for(int u = 0; u<vv.size(); u++)
            minn = ans[u][k]<minn? ans[u][k]:minn;
        for(int u = 0; u<vv.size(); u++)
        {
            if(ans[u][k] != minn)
                ch[u] = true;
        }
        }
        int index = -1;
        //for(auto u: ch)cout<<u<<" * ";cout<<"\n";
        for(k = 0; k<vv.size(); k++)
        {
            if(!ch[k])
            {
                index = k;
                break;
            }
        }

        //cout<<index<<endl;

        //for(auto u: ans[index])cout<<u<<" ";cout<<"\n";
        vv.clear();
        }
}
