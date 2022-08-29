#include<bits/stdc++.h>
using namespace std;

string world[1005];
bool binary(int r, int c, int r1,int c1, int r2, int c2)
{
    bool binary_visited[1001][1001] = {false};
    vector<pair<int, int>>binary_people;

    if(world[r1][c1] == '0')
    {
        binary_people.push_back({r1, c1});
    }
    while(!binary_people.empty())
    {
        r1 = binary_people.back().first;
        c1 = binary_people.back().second;
        binary_people.pop_back();
        binary_visited[r1][c1] = true;
        if(r1 == r2 && c1 == c2)
            return true;
        if(r1 + 1 < r && world[r1+1][c1] == '0' && !binary_visited[r1 +1][c1] )
        {
            binary_people.push_back({r1+1, c1});
        }
        if(r1 - 1 >=0 && world[r1-1][c1] == '0' &&  !binary_visited[r1 -1][c1] )
        {
            binary_people.push_back({r1-1, c1});
        }
        if(c1 + 1 < c && world[r1][c1+1] == '0' &&  !binary_visited[r1][c1+1] )
        {
            binary_people.push_back({r1, c1+1});
        }
        if(c1 - 1 >=0 && world[r1][c1-1] == '0' &&  !binary_visited[r1][c1-1] )
        {
            binary_people.push_back({r1, c1-1});
        }



    }
    return false;
}
bool decimal(int r, int c, int r1,int c1, int r2, int c2)
{
    bool decimal_visited[1001][1001] = {false};
    vector<pair<int, int>>decimal_people;

    if(world[r1][c1] == '1')
    {
        decimal_people.push_back({r1, c1});
    }
    while(!decimal_people.empty())
    {
        r1 = decimal_people.back().first;
        c1 = decimal_people.back().second;
        decimal_people.pop_back();
        decimal_visited[r1][c1] = true;
        if(r1 == r2 && c1 == c2)
            return true;
        if(r1 + 1 <r && world[r1+1][c1] == '1' && !decimal_visited[r1 +1][c1] )
        {
            decimal_people.push_back({r1+1, c1});
        }
        if(r1 - 1 >=0 && world[r1-1][c1] == '1' &&  !decimal_visited[r1 -1][c1] )
        {
            decimal_people.push_back({r1-1, c1});
        }
        if(c1 + 1 < c && world[r1][c1+1] == '1' &&  !decimal_visited[r1][c1+1] )
        {
            decimal_people.push_back({r1, c1+1});
        }
        if(c1 - 1 >=0 && world[r1][c1-1] == '1' &&  !decimal_visited[r1][c1-1] )
        {
            decimal_people.push_back({r1, c1-1});
        }



    }
    return false;
}
int main()
{
    int r,c,r1,c1,r2,c2,n;
    bool x,y;

    cin>>r>>c;
    for(int i = 0; i<r; i++)
        cin>>world[i];
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>r1>>c1>>r2>>c2;
        y = decimal(r,c,r1-1,c1-1,r2-1,c2-1);
        if(y){
            cout<<"decimal\n";
            continue;
        }
        x = binary(r,c,r1-1,c1-1,r2-1,c2-1);
        if(x){
            cout<<"binary\n";
            continue;
        }


        cout<<"neither\n";

    }
}
