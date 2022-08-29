#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t && t != -1){
        int c = 0, k;
        int arr[t];
        for (int i=0; i< t; i++){
            cin >> k;
            arr[i] = k;
            if(k%2 == 0){
                c++;
            }
        }
        bool b = false;
        if ( t == 2 && arr[0]%2 == 0 && arr[1] % 2 == 0 ){
            b = true;
        }
        else if ( arr[0] % 2 == 0 && arr[t-1] % 2 == 0 ){
            for( int j = 1 ; j< t-1; j++ ){
                    if( arr[j] %2 ==0 && arr[j+1] %2 == 0 ){
                        b = true;
                        break;
                }
            }
        }

        if(b){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
