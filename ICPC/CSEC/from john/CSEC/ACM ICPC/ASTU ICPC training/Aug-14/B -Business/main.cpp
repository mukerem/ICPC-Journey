#include <iostream>

using namespace std;

#define forn(i, n) for(int i=0; i<n; i++)

const int inf = (int)1e5;
int adj[1001][1001];
int dis[1001];
bool vis[1001];
int V, E, a, x, y, z, k;

int Short_Path(int s, int e, int dist){

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
            return dis[e-1] ;
		}else
			Short_Path(k, e, temp);

	}

int main()
{

    cin >> V >> E >> a;

     forn(i,V){
        forn(j,V){
            if(i != j)
                adj[i][j] = inf;
        }
    }



    forn(i, E){
        cin >> x >> y >> z;
        adj[x-1][y-1] = z;
    }

   // forn(i,V){forn(j,V) cout<<adj[i][j]<<" ";cout<<endl;}cout<<endl;

   int ans, lans =0, j;
    forn(i, V){

        forn(k,V){
            dis[k] =inf;
            vis[k] =false;
        }
        dis[i] =0;
        ans = Short_Path(i, a, 0);
        if(ans > lans){
            lans =ans;
            j=i+1;
        }
    }

    cout<< j << " " << lans << endl;
  //  forn(i,V) cout<<dis[i]<<" ";cout<<endl;cout<<endl;

    return 0;
}
