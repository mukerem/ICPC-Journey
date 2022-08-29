#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s, t;
	while(cin >> s >> t){
		string s1 = s, t1 = t;
		sort(s1.begin(), s1.end());
		sort(t1.begin(), t1.end());
		cout << "[\n";
		if(s1 == t1){
			int k = s.size();
			string c = string(k, 'i')+string(k,'o');
			
			do{
				stack <char> st;
				bool che = 1;
				int j = 0;
				t1 = "";
				for(int i=0; i<k+k; i++){
					if(c[i]=='i') st.push(s[j++]);
					else if(!st.empty()) t1 += st.top(), st.pop();
					else {
						che = 0;
						break;
					}
				}
				if(che && t == t1){
					for(int i=0; i<k+k; i++)
						cout << c[i] << " ";
					cout << "\n";
				}
			}while(next_permutation(c.begin(), c.end()));
		}
		cout << "]\n";
	}
}