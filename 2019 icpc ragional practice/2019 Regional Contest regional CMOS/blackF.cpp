#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m , k;
    while ( (cin >> n) && n != -1 ){
        cin >> m >> k ;
        priority_queue<int>q;
        for( int i=0; i<k; i++ ){
            int num;
            cin >> num;
            q.push(num);
        }

        int su = 0;
        while ( q.size() >= 1 ){
            for( int l=0; ( !q.empty() && l < n ); l++ ){
                int o = q.top();
                q.pop();
                su += o;
            }

            for( int l=0; ( !q.empty() && l < m ); l++ ){
                int o = q.top();
                q.pop();
            }

        }
        cout << su << endl;
    }
    return 0;
}
