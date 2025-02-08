/*
Longest Common Subsequence Problems

1. Longest Common Subsequence
2. Print Longest Common Subsequence
3. Shortest Common Supersequence
4. Print Shortest Common Supersequence
5. Minimum number of insertions and deletions to convert string a to string b
6. Longest Repeating Subsequence
7. Length of the longest subsequence of a which is a subsequence in b
8. Sequence Pattern Matching
9. Count how many times a appears as a subsequence in b
10. Longest Palindromic Subsequence
11. Longest Palindromic Substring
12. Count of palindromic substrings
13. Minimum no of deletions in a string to make it palindrome
14. Minimum no of insertions in a string to make it palindrome

*/

// LCS : it is the common between two strings

#include <iostream>
#include <cstring>
using namespace std;

// recursive approach
int LCS(string x, string y, int n, int m)
{
  // base condition
  if (n == 0 || m == 0)
  {
    return 0;
  }

  if (x[n - 1] == y[m - 1])
  {
    return 1 + LCS(x, y, n - 1, m - 1);
  }
  else
  {
    return max(LCS(x, y, n - 1, m), LCS(x, y, n, m - 1));
  }
}

// memorization
int dp[1001][1001];
int LCSMemorized(string x, string y, int n, int m)
{
  if (n == 0 || m == 0)
  {
    return 0;
  }

  if (dp[n][m] != -1)
  {
    return dp[n][m];
  }

  if (x[n - 1] == y[m - 1])
  {
    return dp[n][m] = 1 + LCSMemorized(x, y, n - 1, m - 1);
  }
  else
  {
    return dp[n][m] = max(LCSMemorized(x, y, n - 1, m), LCSMemorized(x, y, n, m - 1));
  }
}

// Top Down Approach
int LCSBottomUp(string x, string y, int n, int m)
{

  int dp[n + 1][m + 1];

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
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  return dp[n][m];
}

int main()
{
  string x = "abcdgh";
  string y = "abedfhr";
  int n = x.length();
  int m = y.length();

  cout << LCS(x, y, n, m) << endl;
  memset(dp, -1, sizeof(dp));
  cout << LCSMemorized(x, y, n, m) << endl;

  cout << LCSBottomUp(x, y, n, m) << endl;
  return 0;
}