//program to represent undirected weighted graph using STL. The program basically prints adjacency list representation of graph
#include <bits/stdc++.h>

using namespace std;
void addEdge(vector <pair<int, int> >adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}
//print adjacency list representation of graph
void printGraph(vector<pair<int, int> >adj[], int V)
{
    vector <pair<int, int> >::iterator itr;//a replacement for the key word auto
    int v, w;
    for (int u=0; u<v; u++)
    {
        cout << "Node " << u << "makes an edge with\n";
        for (itr=adj[u].begin(); itr!=adj[u].end(); itr++)//for (auto ir=adj[u].begin(); it!=adj[u].end(); it++)
        {
            v = itr->first;//v = it->first;
            w = itr->second;//w = it->second
            cout << "\tNode " << v << "with edge weight =" << w << endl;
        }
        cout << endl;
    }
}
//Driver code
int main()
{
    int V = 5;
    vector<pair<int, int> > adj[V];
    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 60);
    addEdge(adj, 3, 4, 70);
    printGraph(adj, V);
    return 0;
}
