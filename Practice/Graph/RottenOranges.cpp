// coding ninjas
/*
#include <queue>
#include<vector>


int minTimeToRot(vector<vector<int>> &grid, int n, int m) {


// this queue basically stores row, col as a pair with respective values of them in the given grid (matrix)
// <<row ,col>, time> in the queue.

queue<pair<pair<int,int>,int>> q;

// creating a visited array
vector<vector<int>>ans = grid;
   int vis[n][m];

// finding the already rotten oranges
  for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           if(grid[i][j] == 2){
             q.push({{i, j}, 0});
             vis[i][j] = 2;
           }else{
               vis[i][j] = 0;
           }
       }
   }

int tm=0;
// creating a delta row and col to make up , right , down and left movement in the matrix
 int delRow[] = {-1,0,1,0};
int delCol[] = {0,1,0,-1};
while(!q.empty()){
   int r = q.front().first.first; // getting the row from the first value of the queue ie pair
   int c =q.front().first.second;
   int t = q.front().second;
       tm = max(tm,t);
   q.pop();

// max no of neighbor the a node can have is four so we will explore all possible movement in these directions
    for(int i=0; i<4; i++){
           int nrow = r+delRow[i];
           int ncol = c+delCol[i];

   // now check whether newrow and newcol is already visited or not and also check whether it is fresh orange(value is 1 in grid) or not

   if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&ans[nrow][ncol]==1 && !vis[nrow][ncol]){
          q.push({{nrow,ncol},t+1});
               vis[nrow][ncol] = 2;
               ans[nrow][ncol] = 2;
   }
}


}

// make a final check that all the oranges or not
  for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           if(ans[i][j]==1) return -1;
       }
   }
   return tm;
}
*/