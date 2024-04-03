// coding ninjas

/*
#include <bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {

    unordered_map<int,list<int>>  adj;
    // First we will create a adj list
    for(int i=0; i<e ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // find the indegrees of all nodes

    vector<int> indegree(v);
    for(auto i : adj){
        for(auto j : i.second){
            indegree[j]++;
        }
    }

    // create a queue
    queue<int> q;

    // push element with 0 indegree in queue
    for(int i = 0 ; i<v ;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    //  apply bfs for all components
    vector <int> ans;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        ans.push_back(front);

    // neighbor indegree update
    for(auto neighbor : adj[front]){
        indegree[neighbor]--;
        if(indegree[neighbor]==0){
            q.push(neighbor);
        }
    }
    }
    return ans;
}
*/