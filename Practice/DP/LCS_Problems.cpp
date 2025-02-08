// 1 Longest Common substring

#include <iostream>
using namespace std;
int LCSubstringtopDown(string x, string y, int n, int m)
{
  if (n == 0 || m == 0)
  {
    return 0;
  }

  int dp[n + 1][m + 1];
  int result = 0;

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < m + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < m + 1; j++)
    {
      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
        result = max(result, dp[i][j]);
      }
      else
      {
        dp[i][j] = 0;
      }
    }
  }
  return result;
}

// recursive approach
int Recursive(string x, string y, int n, int m)
{
  if (n == 0 || m == 0)
  {
    return 0;
  }

  if (x[n - 1] == y[m - 1])
  {
    return
  }
}

int main()
{
  string x = "abcde";
  string y = "abfce";
  int n = x.length();
  int m = y.length();

  cout << LCSubstringtopDown(x, y, n, m) << endl;
  int result = 0;
  cout << Recursive(x, y, n, m) << endl;
  return 0;
}