// Bellman ford algorithm : This algorithm is used to find the shortest path like dijkstra algorithm , but it overcomes the drawback of dijkstraa algorithm ie it does not work on edges with negative weight so bellman ford is used to find the negative in the graph also.

/*
vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {

    // initialize a distance array and initialize it with a large number

    vector<int> dist(n+1,1e8);

    dist[src]=0;
// n-1 times
    for(int i=1; i<n ;i++){
        // traverse on edge list
        for(int j=0; j<m ;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if( (dist[u] + w) < dist[v]){
                dist[v]= dist[u]+w;

            }
        }
    }
    return dist;

    // check for negative cycles is present in the graph or not

    // bool flag =0 ;
    //  for(int i=1; i<=n ;i++){
    //     // traverse on edge list
    //     for(int j=0; j<m ;j++){
    //         int u = edges[j][0];
    //         int v = edges[j][1];
    //         int w = edges[j][2];

    //         if(dist[u] != 1e9 && (dist[u] + w < dist[v])){
    //             flag=1;
    //         }
    //     }
    // }

    // if(flag==0 ){
    //     return  dist[dest];
    // }

    // return -1;
}

*/