#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, m;
	while(cin >> n and n){
		
		while(cin >> m and m){
			stack<int> s;
			int i = 1, no = 0;
			while(i < m) s.push(i), i++;
			i++;
			for(int j = 1; j<n; j++){
				cin >> m;
				if(!s.empty()){
					if(s.top()==m)s.pop();
					else if(s.top()>m){
						no = 1;
					}else{
						while(i < m) s.push(i), i++;
						i++;
					}
				}else{
					while(i < m) s.push(i), i++;
					i++;
				}
			}if(s.empty() && !no) cout << "Yes\n";
			else cout << "No\n";
		}cout << "\n";
	}
}