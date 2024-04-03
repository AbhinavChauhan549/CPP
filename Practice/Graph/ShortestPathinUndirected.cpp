// coding ninjas

/*
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){

  // firstly we wil create a adj list
  unordered_map<int,list<int>> adj;

  for(int i =0 ; i<edges.size() ; i++){
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  // apply bfs

  unordered_map<int,bool> visited;
  unordered_map<int,int> parent;

  queue<int>q;
  q.push(s);
  visited[s]=true;
  parent[s]=-1;

  while(!q.empty()){
    int frontnode = q.front();
    q.pop();

    for(auto it : adj[frontnode]){
      if(!visited[it]){
        visited[it]=true;
        parent[it]=frontnode;
        q.push(it);
      }
    }
  }

  // Prepare a shortest path
  vector<int> ans;
  int currentnode = t;
  ans.push_back(currentnode);

  while(currentnode!=s){
    currentnode=parent[currentnode];
    ans.push_back(currentnode);
  }

  // ans.push_back(s);
  // reverse ans
  reverse(ans.begin(),ans.end());

  return ans;

}

*/