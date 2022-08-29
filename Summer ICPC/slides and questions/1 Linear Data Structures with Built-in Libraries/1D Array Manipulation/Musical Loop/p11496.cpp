#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n;
    while(cin>>n && n){
    	int a[n+5];
    	for (int i = 0; i < n; ++i)
	    	cin >> a[i];
	    
	    int ans = 0;
    	for (int i = 0; i < n; ++i){
    		int j = (i+n-1)%n;
	    	if((a[i] > a[j] && a[i] > a[(i+1)%n])||
	    	   (a[i] < a[j] && a[i] < a[(i+1)%n]))
	    		ans++;
    	}cout << ans << "\n";
    }
}