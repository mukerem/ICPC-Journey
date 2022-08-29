#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t, n, x, k = 1;
	while(cin >> t && t){
		map<int, int> m;
		queue<int> q[10000];
		stack<int> st;
		for(int i=0; i<t; i++){
			cin >> n;
			for(int j=0; j<n; j++){
				cin >> x;
				m.insert(make_pair(x, i));
			}
		}

		cout << "Scenario #" << k++ << "\n";
		string s;
		while(cin >> s && s != "STOP"){
			if(s == "ENQUEUE"){
				cin >> x;
				q[m[x]].push(x);
			}else{
				for(int i=0; i<t; i++){
					if(!q[i].empty()){
						cout << q[i].front() << "\n";
						q[i].pop();break;
					}
				}
			}
		}
		cout << "\n";
	}
}