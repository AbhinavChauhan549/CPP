// ============================= Top Down Approach ================================

#include <bits/stdc++.h>

// Top down approach
int solve(vector<int> &num, int x, vector<int> &dp)
{
  // Base case
  if (x == 0)
  {
    return x;
  }
  if (x < 0)
  {
    return INT_MAX;
  }

  int mini = INT_MAX;

  if (dp[x] = -1)
  {
    return dp[x];
  }

  for (int i = 0; i < num.size(); i++)
  {
    int ans = solve(num, x - num[i], dp);

    if (ans != INT_MAX)
    {
      mini = min(mini, 1 + ans);
    }
  }
  dp[x] = mini;
  return mini;
}

// Bottom up approach
int solve2(vector<int> &num, int x)
{
  vector<int> dp(x + 1, INT_MAX);
  dp[0] = 0;

  for (int i = 1; i <= x; i++)
  {
    // i am trying to solve for every amount of figure from one to x
    for (int j = 0; j < num.size(); j++)
    {
      if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
      {
        dp[i] = min(dp[i], 1 + dp[i - num[j]]);
      }
    }
  }

  if (dp[x] == INT_MAX)
  {
    return -1;
  }

  return dp[x];
}

int minimumElements(vector<int> &num, int x)
{
  // Top down approach

  //     // initialize a dp array
  //     vector<int> dp(x+1,-1);

  //     int ans = solve(num, x,dp );
  //    if(ans==INT_MAX){
  //        return -1;
  //    }
  //    return ans;

  // Bottom up approach

  return solve2(num, x);
}