#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b, temp1, temp2;
    long in;
    bool res = false, arr[2000][2000] = {false};
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> b >> in;
        for (int j=0; j<in; j++)
        {
            cin >> temp1;
            cin >> temp2;
            arr[temp1-1][temp2-1] = true;
            arr[temp2-1][temp1-1] = true;
        }
        for (int j=0; j<b; j++)
        {
            for (int k=j+1; k<b; k++)
            {
                if (arr[j][k] && arr[j][k+1])
                {
                    if (arr[j+1][k+1])
                        res = true;
                }
            }
        }
        if (res)
            cout << endl << "GAY" << endl;
        else
            cout << "safe" << endl;
    }
}
