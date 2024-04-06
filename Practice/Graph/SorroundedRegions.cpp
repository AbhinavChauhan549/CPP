// coding ninjas

/*
#include<bits/stdc++.h>
void bfs(int r,int c,int i1,int i2,char** grid,vector<vector<int>> &vis)
    {

        queue <pair<int,int>> q;
        q.push({i1,i2});
        vis[i1][i2]=1;

        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int x=-1;x<=1;x++)
            {
                for(int y=-1;y<=1;y++)
                {
                    if(x==0 ||y==0)
                    {
                        int to_row=row+x;
                        int to_col=col+y;
                        if(to_row<r && to_row>=0 && to_col>=0 && to_col<c)
                        {
                            if(grid[to_row][to_col]=='O' && vis[to_row][to_col]!=1)
                            {
                                vis[to_row][to_col]=1;
                                q.push({to_row,to_col});
                            }
                        }
                    }

                }
            }
        }

    }
void replaceOWithX(char** grid, int n, int  m)
{
    //Write your code here
           vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||i==n-1 || j==0 || j==m-1)
                {
                    if(vis[i][j]!=1 && grid[i][j]=='O')
                    {
                        bfs(n,m,i,j,grid,vis);
                    }
                }
            }
        }
            for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]!=1 && grid[i][j]=='O')
                {
                    grid[i][j]='X';
                }
            }
        }
}
*/