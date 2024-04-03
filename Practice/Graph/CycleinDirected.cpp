// coding ninjas : using dfs

/*
#include<unordered_map>
#include<list>
#include<vector>
bool isCyclicDFS(int node , unordered_map<int,bool>&visited, unordered_map<int,bool>&dfsVisited, unordered_map<int,list<int>>&adj){

  visited[node]=true;

  dfsVisited[node]=true;

  for(auto i : adj[node]){
    if(!visited[i]){
     bool cyclic= isCyclicDFS(i, visited, dfsVisited, adj);

     if(cyclic)
     {
       return true;
     }
    }
    else if(dfsVisited[i]){
      // visited true hai is case me
      return true;
    }
  }
  dfsVisited[node]=false;
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

      // first we will create a adj list
      unordered_map<int,list<int>> adj;

      for(int i =0 ;  i<edges.size() ; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);


      }

      unordered_map<int,bool> visited;
      unordered_map<int,bool> dfsVisited;

      // call dfs for all components

      for(int i=1; i<=n ;i++){
          if(!visited[i]){
            bool cycleFound = isCyclicDFS(i,visited,dfsVisited,adj);
            if(cycleFound){
              return 1;
            }
          }
      }
return 0;
}
*/