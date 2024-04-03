#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class graph
{

public:
  unordered_map<int, list<int>> adjList;

  void addEdge(int u, int v, bool isDirected)
  {
    // direction = 0 means undirected graph
    // direction = 1 means directed graph

    // create an edge from u(first node) to v(second node)
    adjList[u].push_back(v);

    if (isDirected == 0)
    {
      adjList[v].push_back(u);
    }
  }

  void printAdjList()
  {
    for (auto i : adjList)
    {
      cout << i.first << "->";
      for (auto j : i.second)
      {
        cout << j << " ";
      }
      cout << endl;
    }
  }
};
int main()
{
  int nodes, edges;
  cout << "Enter the number of nodes in a graph" << endl;
  cin >> nodes;

  cout << "Enter the number of Edges in a graph" << endl;
  cin >> edges;

  graph g;

  for (int i = 0; i < edges; i++)
  {
    int u, v;
    cin >> u >> v;
    g.addEdge(u, v, 0);
  }

  cout << "Adjancy List of Graph : " << endl;
  g.printAdjList();
  return 0;
}
/*
vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
     vector<vector<int>> ans(n);//declared vector of vectors

    for(int i=0;i<n;i++){

        ans[i].push_back(i);

    }

    for (int i=0;i<m;i++){

        ans[edges[i][0]].push_back(edges[i][1]);

        ans[edges[i][1]].push_back(edges[i][0]);

    }



   return ans;
}
*/