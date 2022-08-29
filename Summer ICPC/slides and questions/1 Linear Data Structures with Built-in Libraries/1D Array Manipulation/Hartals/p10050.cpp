#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool arr[4000];
int main(){
	int t, n, p;
	cin >> t;
	for(int i=0; i<t; i++){
		memset(arr, 0, 4000);
		cin >> n >> p;
		int c = 0;
		for(int j=0; j<p; j++){
			int x; cin >> x;
			for(int k=x; k<=n; k+=x)
				if(!arr[k] && (k+1)%7 && k%7) arr[k]=1,c++;
		}cout << c << "\n";
	}
}

