#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

int find_root(int arr[], int n)
{
    while (n != arr[n])
        n = arr[n];
    return n;
}

void Union(int arr[], int A, int B)
{
    int rootA = find_root(arr, A);
    int rootB = find_root(arr, B);

    arr[rootB] = rootA;
}

bool IsTheSameSet(int arr[], int A, int B)
{
    if (find_root(arr, A) == find_root(arr, B))
        return true;
    return false;
}

int main()
{

    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        vector <pair<int, pair<int, int>>> Nodes;
        map<string,int> mp;
        int in , in2;
        cin>>in>>in2;

        int arr[in+1];


        for (int i = 0; i<=in; i++)arr[i]= i;
        int c = 1;
        for (int i = 0; i < in2; i++)
        {
            int w;
            string no1, no2;
            cin>>no1>>no2>>w;
            if(mp.count(no1) == 0)
            {
                mp[no1] = c++;
            }
            if(mp.count(no2) == 0)
            {
                mp[no2] = c++;
            }
            Nodes.push_back(make_pair(w, make_pair(mp[no1], mp[no2])));
        }

        sort(Nodes.begin(), Nodes.end());

        int sum = 0;
        for (auto x : Nodes)
        {
            if (!IsTheSameSet(arr, x.s.f, x.s.s))
            {
                sum += x.f;
                Union(arr, x.s.f, x.s.s);
            }
        }
        cout<<sum<<endl;
    }
}
