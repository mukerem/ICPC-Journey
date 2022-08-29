#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200010;

map<char, vector<pair<int, int>>> m;
void in(char c, int i, int j){
	vector<pair<int, int>> v;
	v.push_back(make_pair(i, j));
	if(i-1 >= 0)
		v.push_back(make_pair(i-1, j));
	if(j-1 >= 0)
		v.push_back(make_pair(i, j-1));
	if(i+1 < 3)
		v.push_back(make_pair(i+1, j));
	if(j+1 < 3)
		v.push_back(make_pair(i, j+1));
	m[c] = v;
}
int main(){
	char ch = 'a';
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			in(ch, i, j), ch++;
	
    string s;
    int k = 1;
    while(cin>>s){
    	int arr[3][3] = {0};
    	for(int i=0; i<s.size(); i++)
    		for(auto j : m[s[i]])
    			arr[j.first][j.second]++;
    	cout << "Case #" << k++ << ":\n";
    	for(int i=0; i<3; i++){
    		for(int j=0; j<3; j++)
    			cout << arr[i][j] << " ";
    		cout << "\n";
    	}
    }
}