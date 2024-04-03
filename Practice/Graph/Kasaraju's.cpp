// Kosaraju"s algo  is used to find the strongly connected components in the graph
/*
#include<bits/stdc++.h>



void DFSFill(int u,unordered_map<int,vector<int>>&adj,vector<bool>&visited,stack<int>&st){

    visited[u]=true;

    for(int &v:adj[u]){

        if(!visited[v]){

            DFSFill(v,adj,visited,st);

        }

    }

    st.push(u);

}



void DFSTraversal(int u,vector<vector<int>>&adjReversed,vector<bool>&visited){

    visited[u]=true;

    for(int &v:adjReversed[u]){

        if(!visited[v]){

            DFSTraversal(v,adjReversed,visited);

        }

    }

}



int stronglyConnectedComponents(int V, vector<vector<int>> &edges)

{

    // Write your code here.

    unordered_map<int,vector<int>>adj;

    for(vector<int>vec:edges){

        int u=vec[0];

        int v=vec[1];



        adj[u].push_back(v);

    }



    stack<int>st;

    vector<bool>visited(V,false);

    for(int i=0;i<V;i++){

        if(!visited[i]){

            DFSFill(i,adj,visited,st);

        }

    }



    vector<vector<int>>adjReversed(V);

    for(int u=0;u<V;u++){

        for(int &v:adj[u]){

            adjReversed[v].push_back(u);

        }

    }



    int countScc=0;

    visited=vector<bool>(V,false);

    while(!st.empty()){

        int node=st.top();

        st.pop();

        if(!visited[node]){

            DFSTraversal(node,adjReversed,visited);

            countScc++;

        }

    }

    return countScc;



}
*/
