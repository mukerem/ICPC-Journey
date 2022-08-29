#include<iostream>
#include<queue>
using namespace std;
int mat[10005][10005];
int main()
{
    int n, m, r, i, j, x, v;
    queue<int> index, value;
    cin>>m>>n;
    for(i=0;i<m;i++){
        cin>>r;
        for(j=0;j<r;j++){
            cin>>x;
            index.push(x-1);
        }
        for(j=0;j<r;j++){
            cin>>v;
            mat[i][index.front()] = v;
            index.pop();
        }
    }
    /*
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }
    */
    cout<<n<<" "<<m<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mat[j][i]){
                value.push(mat[j][i]);
                index.push(j+1);
                }
        }
        cout<<index.size()<<" ";
        while(!index.empty()){
            cout<<index.front()<<" ";
            index.pop();
        }
        cout<<endl;
        while(!value.empty()){
            cout<<value.front()<<" ";
            value.pop();
        }
        cout<<endl;

    }
}
