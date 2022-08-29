#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
queue<int> q;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	while(cin >> n && n){
		
		for(int i=1; i<=n; i++)q.push(i);

		cout << "Discarded cards: ";
		while(q.size() > 1){
			if(q.front()==1)cout << q.front();
			else cout << ", " << q.front();
			q.pop();
			q.push(q.front());
			q.pop();
		}
		cout << "\nRemaining card: " << q.front() << "\n";
		q.pop();
	}
}
