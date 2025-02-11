// 1. Palindrome Partitioning

#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
  while (i < j)
  {
    if (s[i] != s[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int PPRecursive(string s, int i, int j)
{
  if (i >= j)
  {
    return 0;
  }
  if (isPalindrome(s, i, j))
  {
    return 0;
  }
  int min = INT_MAX;
  for (int k = i; k < j; k++)
  {
    int temp = 1 + PPRecursive(s, i, k) + PPRecursive(s, k + 1, j);
    if (temp < min)
    {
      min = temp;
    }
  }
  return min;
}

// Memorized Approach
int PPMemorized(string s, int i, int j, int dp[100][100])
{
  if (i >= j)
  {
    return 0;
  }
  if (isPalindrome(s, i, j))
  {
    return 0;
  }
  if (dp[i][j] != -1)
  {
    return dp[i][j];
  }
  int min = INT_MAX;
  for (int k = i; k < j; k++)
  {
    int temp = 1 + PPMemorized(s, i, k, dp) + PPMemorized(s, k + 1, j, dp);
    if (temp < min)
    {
      min = temp;
    }
  }
  dp[i][j] = min;
  return dp[i][j];
}

// Optimized Memorized Approach
int PPMemorizedO(string s, int i, int j, int dp[100][100])
{
  if (i >= j)
  {
    return 0;
  }
  if (isPalindrome(s, i, j))
  {
    return 0;
  }
  if (dp[i][j] != -1)
  {
    return dp[i][j];
  }
  int min = INT_MAX;
  for (int k = i; k < j; k++)
  {
    int left = 0, right = 0;
    if (dp[i][k] != -1)
    {
      left = dp[i][k];
    }
    else
    {
      left = PPMemorizedO(s, i, k, dp);
      dp[i][k] = left;
    }
    if (dp[k + 1][j] != -1)
    {
      right = dp[k + 1][j];
    }
    else
    {
      right = PPMemorizedO(s, k + 1, j, dp);
      dp[k + 1][j] = right;
    }
    // int temp = 1 + PPMemorized(s, i, k, dp) + PPMemorized(s, k + 1, j, dp);
    int temp = 1 + left + right;
    if (temp < min)
    {
      min = temp;
    }
  }
  dp[i][j] = min;
  return dp[i][j];
}

int PPMemorized(string s, int i, int j)
{
  int dp[100][100];
  memset(dp, -1, sizeof(dp));
  return PPMemorizedO(s, i, j, dp);
}

int main()
{
  // string s = "nitin"; // output = 0
  string s = "nitik"; // output = 2

  int n = s.length();
  cout << PPRecursive(s, 0, n - 1) << endl;
  cout << PPMemorized(s, 0, n - 1) << endl;

  return 0;
}