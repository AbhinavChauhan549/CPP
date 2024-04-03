// coding ninjas

/*
#include<bits/stdc++.h>

bool isCyclic(int src,unordered_map<int,bool>&visited,

    unordered_map<int,list<int>>& adj){
        // parent or child node ke beech mapping karne ke liye parent ko use kara hai isse cycle b detect hogi
        unordered_map<int,int>parent;



        parent[src]=-1;

        visited[src]=true;

        queue<int>q;

        q.push(src);



        while(!q.empty()){

            int front = q.front();

            q.pop();

            //cycle is present iff visted is true && that node is not the parent of previous node

            for(auto neighbour:adj[front]){

                if(visited[neighbour] == true && neighbour!=parent[front]){

                     return true;

                }

                else if(!visited[neighbour]){

                    q.push(neighbour);

                    visited[neighbour]=1;

                    parent[neighbour]=front;

                }

            }

        }

        return false;

    }

string cycleDetection (vector<vector<int>>& edges, int n, int m)

{

    //creating adjacency list

    unordered_map<int,list<int>> adj;



    for(int i = 0; i<m; i++){

        int u = edges[i][0];

        int v = edges[i][1];



        adj[u].push_back(v);

        adj[v].push_back(u);

    }



    unordered_map<int,bool>visited;

    //handeling disconnected component of the graph

    for(int i =0; i<n; i++){

        if(!visited[i]){

            bool ans = isCyclic(i,visited,adj);



            if (ans==1) {

                    return "Yes";

            }

        }

    }

    return "No";

}
========================================using DFS ======================================================

bool isCyclicDFS (int node , int parent , unordered_map<int,bool>&visited ,unordered_map<int,list<int>>& adj ){
    visited[node]=true ;

    for(auto neighbors : adj[node]){
        if(!visited[neighbors]){
          bool cycleDetected =   isCyclicDFS(neighbors,node,visited,adj);
          if(cycleDetected){
            return true;
          }
          }
          else if(neighbors != true){
            `   return true;

        }
    }
    return false;
}

*/