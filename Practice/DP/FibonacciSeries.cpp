// top down approach : Recursion + Memorization

#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
  // base case
  if (n == 1 || n == 0)
  {
    return n;
  }

  if (dp[n] != -1)
  {
    return dp[n];
  }

  dp[n] = fib(n - 1, dp) + fib(n - 2, dp);

  return dp[n];
}

int main()
{
  /*
   *  Write your code here.
   *  Read input as specified in the question.
   *  Print output as specified in the question.
   */

  int n;
  cin >> n;

  vector<int> dp(n + 1);

  for (int i = 0; i <= n; i++)
  {
    dp[i] = -1;
  }

  cout << fib(n, dp) << endl;

  return 0;
}

//===================================Bottom Up Approach ============================================================

int main()
{
  /*
   *  Write your code here.
   *  Read input as specified in the question.
   *  Print output as specified in the question.
   */

  int n;
  cin >> n;

  vector<int> dp(n + 1);

  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  cout << dp[n] << endl;

  return 0;
}
//=================================Space Optimization=================================

int main()
{
  /*
   *  Write your code here.
   *  Read input as specified in the question.
   *  Print output as specified in the question.
   */

  int n;
  cin >> n;

  int prev1 = 1, prev2 = 0;

  for (int i = 2; i <= n; i++)
  {
    int curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
  }

  cout << prev1 << endl;

  return 0;
}