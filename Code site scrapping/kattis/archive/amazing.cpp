// Time: 2019-11-27 16:53:27
// title: A Mazing!
// language: C++


#include<bits/stdc++.h>
using namespace std;
int maze[205][205][4];
string dir[]={"right", "up", "left", "down"};
int xadd[] = {1, 0, -1, 0};
int yadd[] = {0, 1, 0, -1};
bool visited[205][205];
int x=100, y=100, k;
int answer(string s){
    k = 0;
    for(int i=0; i<4; i++)k+=maze[x][y][i];
    if(k == -4)return 6;
}
int main(){
    int k, go=-1,res=-1;
    string s;
    visited[x][y]=1;
    bool ok;
    while(true){
        ok=false;
        k = 1;
        for(int i=0; i<4; i++)k*=maze[x][y][i];
       if(k != 0){
            cout << flush;
            cout<<"no way out"<<endl;
            break;
        }
        for(int i=0; i<4 ; i++){
            if(i == go)continue;
            if(maze[x][y][i] == 0){
                int a = x+xadd[i];
                int b = y+yadd[i];
                if(visited[a][b]){
                    res = i;
                    continue;
                }
                cout << flush<< dir[i]<<endl;
                go = i;
                ok=true;
                break;
            }
        }
        if(!ok){
            cout << flush<< dir[res]<<endl;
            go = res;
        }
        res=-1;
        cin>>s;
        if(s == "solved")break;
        else if(s == "ok"){
            maze[x][y][go] = 1;

            x += xadd[go];
            y += yadd[go];
            go = -1;
            visited[x][y]=1;

        }
        else if(s == "wall"){
            maze[x][y][go] = -1;
        }
        //cout<<x<<" "<<y<<endl;
    }
}
