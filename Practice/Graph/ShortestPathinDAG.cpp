// The shortest distance is calculated using Topological Sort and a Distance Array

#include <iostream>
#include <unordered_map>
#include <stack>
#include <list>
#include <vector>
#include <limits>
#include <bits/stdc++.h>
using namespace std;
class graph
{

public:
  // creating a adjacency list
  unordered_map<int, list<pair<int, int>>> adj;

  // creating a funtion to create a adj list
  void addEdge(int u, int v, int weight)
  {
    pair<int, int> p = make_pair(v, weight);
    adj[u].push_back(p);
  }

  // creating a function to check the adj list is correct or not
  void print()
  {
    for (auto i : adj)
    {
      cout << i.first << " ->";
      for (auto j : i.second)
      {
        cout << "{" << j.first << ", " << j.second << "}, ";
      }
      cout << endl;
    }
  }

  // creating a function to apply dfs on the nodes
  void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
  {
    visited[node] = true;

    for (auto i : adj[node])
    {
      if (!visited[i.first])
      {
        dfs(i.first, visited, s);
      }
    }
    s.push(node);
  }

  void getShortestPath(int src, vector<int> &dist, stack<int> &topo)
  {

    dist[src] = 0;
    while (!topo.empty())
    {
      int top = topo.top();
      topo.pop();

      if (dist[top] != INT_MAX)
      {
        for (auto i : adj[top])
        {
          if (dist[top] + i.second < dist[i.first])
          {
            dist[i.first] = dist[top] + i.second;
          }
        }
      }
    }
  }
};

int main()
{

  graph g;

  g.addEdge(0, 1, 5);
  g.addEdge(0, 2, 3);
  g.addEdge(1, 2, 2);
  g.addEdge(1, 3, 6);
  g.addEdge(2, 3, 7);
  g.addEdge(2, 4, 4);
  g.addEdge(2, 5, 2);
  g.addEdge(3, 4, -1);
  g.addEdge(4, 5, -2);

  g.print();

  // Total number of nodes in this case are : 6
  int n = 6;
  // topological sort

  unordered_map<int, bool> visited;
  stack<int> s;

  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      g.dfs(i, visited, s);
    }
  }

  int src = 1;

  vector<int> distance(n);

  for (int i = 0; i < n; i++)
  {
    distance[i] = INT_MAX;
  }

  // call the shortest path function

  g.getShortestPath(src, distance, s);

  cout << "Answer is : " << endl;

  for (int i = 0; i < distance.size(); i++)
  {
    cout << distance[i] << " ";
  }
  cout << endl;

  return 0;
}