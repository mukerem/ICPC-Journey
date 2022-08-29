#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int Arr[100005];
int root(int i)
{
    while(Arr[ i ] != i)
    {
     i = Arr[ i ];
    }
    return i;
}
int set_union(int A ,int B)
{
    int root_A = root( A);
    int root_B = root( B);
    Arr[ root_A ] = root_B ;
}
bool find(int A,int B)
{
    if( root(A)==root(B) )
    return true;
    else
    return false;
}
int main()
{
    queue <int> change_root;
    int n,m, i, j ,x , p, q, q_root,p_root, root_index, sum , counter;
    while(cin>>n>>m)
    {

        for(i=1;i<=n;i++)Arr[i] = i;
        for(i = 0; i< m; i++)
        {
               //for(j =1; j<=n; j++)cout<<Arr[j]<<" ";
                //cout<<endl;
            cin>>x;
            if(x == 1)
            {
                cin >> p>>q;
                set_union(p,q);

            }
            else if(x == 2)
            {
                cin>>p>>q;
                q_root =  root(q) ;
                p_root = root(p);
                Arr[ p ] = q_root ;
                root_index = 0;
                for(j = 1; j<=n; j++)
                    if(Arr[j] == p)
                        change_root.push(j);

                while(!change_root.empty())
                {
                    Arr[change_root.front()] = p_root;
                    change_root.pop();
                }

            }
            else
            {

                sum = 0, counter = 0;
                cin>>p;
                root_index = root(p);
                for(j =1 ; j<= n; j++)
                {
                    if(root(j) == root_index)
                    {
                        counter++;
                        sum += j;
                    }
                }
                cout<<counter <<" "<<sum<<endl;
            }
        }
    }
}
