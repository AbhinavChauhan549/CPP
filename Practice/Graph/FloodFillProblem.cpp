// coding ninjas

/*
vector<vector<int>> floodFill(vector<vector<int>> &image, int n, int m, int x, int y, int p) {

   vector<vector<int>>vis(n,vector<int>(m,0));
    vis[x][y]==1;

   queue<pair<int,int>>q;
   q.push({x,y});
    int cpixel= image[x][y];
    image[x][y]=p;
     int dx[] ={-1,0,0,1 };
    int  dy[]={0,-1,1,0};
   while(!q.empty())
   {
       int crow=q.front().first;
       int ccol=q.front().second;
       q.pop();

            for(int i=0;i<4;i++)
            {
                int nrow= crow+dx[i];
                int ncol=ccol+dy[i];
               if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && image[nrow][ncol]==cpixel)
               {
                   image[nrow][ncol]=p;
                   vis[nrow][ncol]=1;
                   q.push({nrow,ncol});
               }
            }



   }

    return image;

}
*/