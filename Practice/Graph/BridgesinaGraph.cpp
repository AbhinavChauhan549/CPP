// coding ninjas

/*
#include<unordered_map>
#include<list>
#include<vector>

void dfs (int node ,int parent, int &timer ,vector<int>&disc , vector<int>&low , vector<vector<int>>&result,
unordered_map<int,list<int>>&adj , unordered_map<int,bool>&visited  ){

    visited[node]=true;

    // disc , low of node ko update karege or timer ko b increement karege
    disc[node]=low[node]=timer++;

    for(auto neighbor : adj[node]){
        if(neighbor == parent){
            continue;
        }

        if(!visited[neighbor]){
            dfs(neighbor,node,timer,disc,low,result,adj,visited);
            low[node]= min(low[node],low[neighbor]);

            // check if particular edge is a bridge or not
            if(low[neighbor] > disc[node]){
                vector<int> ans;
                 ans.push_back(node);
                ans.push_back(neighbor);

                result.push_back(ans);
            }
        }
        else {
            // the neighbor is an back edge
            low[node]= min(low[node], disc[neighbor]);
        }
    }
}
vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    // create a adj list
    unordered_map<int,list<int>> adj;

    for(int i=0; i<edges.size() ; i++){

        int u = edges[i][0];
        int  v= edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    // Data structure that are used

    int timer =0 ;
    vector<int> disc(v);
    vector<int> low(v);
    int parent = -1 ;
    unordered_map<int , bool>visited;

    // initializing the disc and low of all nodes as -1
    for(int i=0; i<v ;i++){
        disc[i]=-1;
        low[i]=-1;
    }


    vector<vector<int>> result;
    // apply DFS

    for(int i=0 ; i<v ;i++){
        if(!visited[i]){
            dfs(i,parent,timer , disc ,low ,result,adj,visited);
        }
    }
return result;
}
*/