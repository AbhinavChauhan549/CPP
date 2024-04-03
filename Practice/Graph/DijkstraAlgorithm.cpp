// This algorithm is used to find the shortest path from a starting node to all the other nodes

/*
#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
#include <limits>
#include <set>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // creating a adjacency list
    unordered_map<int,list<pair<int,int>>> adj;

    for(int i=0 ;i < edges ; i++){
        int u  = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

     // creating a distance vector
     vector<int> dist(vertices);
     for(int i =0 ; i<vertices ; i++){
         dist[i]=INT_MAX;
     }

     // set create karege
     set<pair<int,int>> st ;

     dist[source]=0;
     st.insert(make_pair(0,source));


    while(!st.empty()){
        // fetch the top node from set
        auto top = *(st.begin());

        int nodeDistance = top.first;
        int topNode= top.second;

        // erase the top node of the set
        st.erase(st.begin());

        // traverse the neighbors
        for(auto neighbors : adj[topNode]){
            if(nodeDistance + neighbors.second < dist[neighbors.first]){

                auto record = st.find(make_pair(dist[neighbors.first], neighbors.first));

                // if record found then erase it
                if(record != st.end()){
                    st.erase(record);
                }
                 // distance ko update karo
                dist[neighbors.first]=nodeDistance+neighbors.second;

                // push record in set
                st.insert(make_pair(dist[neighbors.first],neighbors.first));
            }
        }

    }

    return dist;
}

 */