#include <bits/stdc++.h>
using namespace std;
#define V 1000
int graph[V][V];
int minDistance(int dist[], bool sptSet[], int ver)
{
int min = INT_MAX, min_index;

for (int v = 0; v < ver; v++)
	if (sptSet[v] == false && dist[v] <= min)
		min = dist[v], min_index = v;

return min_index;
}

int printSolution(int dist[], int n)
{
int maxx = 0, index = 0;
for (int i = 0; i < n; i++){
    if(maxx<dist[i]){
    maxx = dist[i];
    index = i;
    }
    printf("%d %d\n",i,dist[i]);
}
	printf("%d %d\n", index+1, maxx);
}

void dijkstra(int graph[V][V], int src, int ver)
{
	int dist[ver];	 // The output array. dist[i] will hold the shortest
					// distance from src to i

	bool sptSet[ver]; // sptSet[i] will be true if vertex i is included in shortest
					// path tree or shortest distance from src to i is finalized

	// Initialize all distances as INFINITE and stpSet[] as false
	for (int i = 0; i < ver; i++){
		dist[i] = INT_MAX, sptSet[i] = false;
    }

	// Distance of source vertex from itself is always 0
	dist[src] = 0;

	// Find shortest path for all vertices
	for (int count = 0; count < ver-1; count++)
	{
	// Pick the minimum distance vertex from the set of vertices not
	// yet processed. u is always equal to src in the first iteration.
	int u = minDistance(dist, sptSet, ver);

	// Mark the picked vertex as processed
	sptSet[u] = true;

	// Update dist value of the adjacent vertices of the picked vertex.
	for (int v = 0; v < ver; v++)

		// Update dist[v] only if is not in sptSet, there is an edge from
		// u to v, and total weight of path from src to v through u is
		// smaller than current value of dist[v]
		if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
									&& dist[u]+graph[u][v] < dist[v])
			dist[v] = dist[u] + graph[u][v];
	}

	// print the constructed distance array
	printSolution(dist, ver);
}

// driver program to test above function
int main()
{
int x,y,z,a,b,c;
cin>>x>>y>>z;
    for (int i=0;i<y;i++){

    cin>>a>>b>>c;
    //graph[a-1][b-1] = c;
    graph[b-1][a-1] = c;
    }
	dijkstra(graph, z-1, x);

	return 0;
}
