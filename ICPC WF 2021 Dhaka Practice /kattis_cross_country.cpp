#include<bits/stdc++.h>
using namespace std;
int graph[1001][1001];
int minDistance(int dist[], bool sptSet[], int V)
{
     int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

int dijkstra(int V, int src, int end)
{
    int dist[V];

    bool sptSet[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet, V);

        sptSet[u] = true;

        for (int v = 0; v < V; v++)

           if (!sptSet[v] && graph[u][v]
                && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    return dist[end];
}

int main(){
    int n,s,t;
    cin>>n>>s>>t;

    for(int i=0; i<n;i++)
        for(int j=0;j<n;j++)
            cin>>graph[i][j];
    cout<<dijkstra(n, s, t);
}

