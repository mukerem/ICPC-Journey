#include<bits/stdc++.h>
using namespace std;

int main(){


    int ope, c,d;
    while(cin>>ope){
        stack<int> s;
        queue<int> q;
        priority_queue<int> p;
        int x=1,y=1,z=1;
        for(int i=0;i<ope;i++){
            cin>>c>>d;
            if(c == 1){
                s.push(d), q.push(d), p.push(d);
            }
            else{

                if(s.empty() || q.empty()  || p.empty()) x=0,y=0,z=0;
                else{
                    if(d != s.top()) x = 0;
                    if(d != q.front()) y = 0;
                    if(d != p.top()) z = 0;
                    s.pop(), q.pop(), p.pop();
                }

            }
        }
        if(x + y + z == 0) cout<<"impossible"<<endl;
        else if (x + y + z > 1) cout<<"not sure"<<endl;
        else if (x) cout<<"stack"<<endl;
        else if (y) cout<<"queue"<<endl;
        else cout<<"priority queue"<<endl;

    }

    }
