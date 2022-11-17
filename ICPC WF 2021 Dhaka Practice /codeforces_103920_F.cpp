#include<bits/stdc++.h>
using namespace std;

long long minDistance(long long dist[], bool sptSet[], long long V)
{
     long long min = LONG_MAX;
     long long min_index;

    for (long long v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}
int main(){
    long long V,x, y;
    cin>>V;
    vector<long long>v(V), vv(V);
    long long graph[V][V];
    for(long long i=0; i<V; i++){
        cin>>v[i];
        long long k=0, d=v[i];
        while(d){d /= 2;k++;}
        vv[i] = powl(2, k) - 1 - v[i];
    }
    for(long long i=0; i<V; i++){
        for(long long j=0; j<V; j++){
            //cout<<min(v[i]&v[j], vv[i] & vv[j])<<endl;
            graph[i][j] = min(v[i]&v[j], vv[i] & vv[j]);
        }
    }

    long long dist[V];
    bool sptSet[V];
    for (long long i = 0; i < V; i++)
        dist[i] = LONG_MAX, sptSet[i] = false, graph[i][i]=0;
    long long src = 0;
    dist[src] = 0;

    for (long long count = 0; count < V-1; count++) {
        long long u = minDistance(dist, sptSet, V);

        sptSet[u] = true;
        for (long long v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v]
                && dist[u] != LONG_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    if(dist[V-1] == LONG_MAX)cout<<0;
     else cout<<dist[V-1];
}
