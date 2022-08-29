#include <iostream>
#include <windows.h>

using namespace std;

#define forn(i, n) for(int i=0; i<n; i++)

const int inf = (int)1e5;
int adj[1001][1001];
int dis[1001];
bool vis[1001];
int V, E, u, v, x, y, z, k;

void Short_Path(int s, int e, int dist){

		vis[s] = true;
		int newd,temp=inf;
		for (int j = 0; j < V; ++j) {
			if(!vis[j]){
           //     cout<<s+1<<" "<< j+1 <<" "<<adj[s][j]<<endl;
				newd = dist+adj[s][j];
				if(dis[j] > newd)dis[j]=newd;
				if(dis[j] < temp){temp = dis[j];k=j;}

			//	system("pause");
			}
		//	forn(i,V) cout<<dis[i]<<" ";cout<<endl;cout<<endl;
		}

		if(vis[e-1]){
            cout << dis[e-1] << endl;
            return;
		}else
			Short_Path(k, e, temp);

	}

int main()
{

    cin >> V >> E >> u >> v;

     forn(i,V){
        dis[i] =inf;
        forn(j,V){
            if(i != j)
                adj[i][j] = inf;

        }
    }



    forn(i, E){
        cin >> x >> y >> z;
        adj[x-1][y-1] = z;
        adj[y-1][x-1] = z;
    }

   // forn(i,V){forn(j,V) cout<<adj[i][j]<<" ";cout<<endl;}cout<<endl;

    dis[u-1] =0;
    Short_Path(u-1, v, 0);
  //  forn(i,V) cout<<dis[i]<<" ";cout<<endl;cout<<endl;

    return 0;
}
