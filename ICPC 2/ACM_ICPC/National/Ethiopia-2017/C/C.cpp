#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
#define sz(s) s.size()

string p="";
bool valid(char c, int i){

    if(i==0){
        if(c=='S' || c=='B' || c=='L') return 1;
        else return 0;
    }else if(i==(sz(p)-1)){
        if(c=='S' || c==']' || c==')') return 1;
        else return 0;
    }else if(c=='L' || c=='B'){
        if(p[i+1]=='S' || p[i+1]=='[' || p[i+1]=='(') return 1;
        else return 0;
    }else if(c=='S' || c==']' || c==')'){
        if(p[i+1]==',' || p[i+1]==']' || p[i+1]==')') return 1;
        else return 0;
    }else if(c==',' || c=='(' || c=='['){
        if(p[i+1]=='L' || p[i+1]=='B' || p[i+1]=='S') return 1;
        else return 0;
    }

}

stack<char> s;
map<char, int> m;

int main()
{

    int w;
    string str;

    cin>>w;

    cin.ignore(1);
    getline(cin,str);


    rep(i,sz(str))if(str[i]!=' ')p+=str[i];


    rep(i,sz(p)){
        if(!valid(p[i],i)){
            cout<<-1<<endl;
            return 0;
        }

        if(p[i]=='[' || p[i]=='(') s.push(p[i]);
        else if(p[i]==']'){
            if(s.top()=='[')s.pop();
            else if(s.empty()){
                cout<<-1<<endl;
                return 0;
            }
        }else if(p[i]==')'){
            if(s.top()=='(')s.pop();
            else if(s.empty()){
                cout<<-1<<endl;
                return 0;
            }
        }

        m[p[i]]++;
    }

    int v =2*(m['L']+m['B'])+m['S'];
    int Ef =2*m['L']+3*m['B']+m['S']-1;
    int Eb =m['L'];

    if(s.empty()) cout<<Ef+w*Eb-v+2<<endl;
    else cout<<-1<<endl;

}

