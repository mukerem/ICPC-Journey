#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int sum)
{
    int l, r;
    int b[n];
    for(int i=0; i<n; i++)b[i] = A[i];
    set<int> s;

    sort(A, A + n);
    for(int ii=0; ii<n-3; ii++){
    for (int i = ii+1; i < n - 2; i++) {

        l = i + 1;
        r = n - 1;
        while (l < r) {
            if (A[ii]+A[i] + A[l] + A[r] == sum) {
              int idx = 0;
              bool x=false, y=false, z=false, w=false;
                while(s.size() < 4){
                if(b[idx] == A[i] && x==false)s.insert(idx), x=true;
                else if(b[idx] == A[l] && y==false)s.insert(idx), y=true;
                else if(b[idx] == A[r] && z==false)s.insert(idx), z=true;
                else if(b[idx] == A[ii] && w==false)s.insert(idx), w=true;
                idx++;
                }
                for(auto u: s)cout<<u+1<<" ";




                return true;
            }
            else if (A[ii]+A[i] + A[l] + A[r] < sum)
                l++;
            else
                r--;
        }
    }
    }
    cout<<"IMPOSSIBLE";
    return false;
}

int main()
{
     int n, x;
     cin>>n>>x;
     int a[n];
     for(int i=0; i<n; i++){
      cin>>a[i];
     }
    find4Numbers(a, n, x);
    return 0;
}
