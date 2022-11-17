#include <bits/stdc++.h>
using namespace std;

int getMid(int s, int e) { return s + (e -s)/2; }

int RMQ(int *st, int ss, int se, int qs, int qe, int index)
{
    if (qs <= ss && qe >= se)
        return st[index];

    if (se < qs || ss > qe)
        return INT_MAX;

    int mid = getMid(ss, se);
    return min(RMQ(st, ss, mid, qs, qe, 2*index+1),
                RMQ(st, mid+1, se, qs, qe, 2*index+2));
}

int constructSTUtil(int arr[], int ss, int se,
                                int *st, int si)
{

    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    int mid = getMid(ss, se);
    st[si] = min(constructSTUtil(arr, ss, mid, st, si*2+1),
                    constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}

int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2*(int)pow(2, x) - 1;
    int *st = new int[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}

int main()
{

    int n,a, b=0, m;
     cin>>n>>m;
     int v[n];
     for(int i=0; i<n; i++){
         cin>>v[i];
     }
     int *st = constructST(v, n);
     for(int i=0; i<m ;i++){
        cin>>a>>b;
        a--;b--;
        cout<<RMQ(st, 0, n-1, a, b, 0)<<endl;
     }
    return 0;
}
