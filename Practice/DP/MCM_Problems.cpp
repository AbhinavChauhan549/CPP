// 1. Palindrome Partitioning
/*
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
  */

//==============================================================================================================================================

// 2. Evaluate Expression to True / Boolean Parenthesization

/*
#include <bits/stdc++.h>
using namespace std;

// Memoization map
unordered_map<string, int> dp;

int countWays(string &s, int i, int j, bool isTrue)
{
  // Base case: Single character
  if (i == j)
  {
    if (isTrue)
      return s[i] == 'T';
    else
      return s[i] == 'F';
  }

  // Create a unique key for memoization
  string key = to_string(i) + "_" + to_string(j) + "_" + to_string(isTrue);
  if (dp.find(key) != dp.end())
    return dp[key];

  int ways = 0;

  // Iterate over operators
  for (int k = i + 1; k < j; k += 2)
  {
    char op = s[k]; // Operator at position k

    // Recursively calculate left and right partitions
    int leftTrue = countWays(s, i, k - 1, true);
    int leftFalse = countWays(s, i, k - 1, false);
    int rightTrue = countWays(s, k + 1, j, true);
    int rightFalse = countWays(s, k + 1, j, false);

    // Compute ways based on the operator
    if (op == '&')
    {
      if (isTrue)
        ways += leftTrue * rightTrue;
      else
        ways += (leftTrue * rightFalse) + (leftFalse * rightTrue) + (leftFalse * rightFalse);
    }
    else if (op == '|')
    {
      if (isTrue)
        ways += (leftTrue * rightTrue) + (leftTrue * rightFalse) + (leftFalse * rightTrue);
      else
        ways += leftFalse * rightFalse;
    }
    else if (op == '^')
    {
      if (isTrue)
        ways += (leftTrue * rightFalse) + (leftFalse * rightTrue);
      else
        ways += (leftTrue * rightTrue) + (leftFalse * rightFalse);
    }
  }

  return dp[key] = ways; // Store result in memoization map
}

int main()
{
  string expression = "T|F&T^T"; // Expression: T OR F AND T XOR T
  int n = expression.size();

  dp.clear(); // Clear memoization map
  cout << "Number of ways to evaluate the expression to true: "
       << countWays(expression, 0, n - 1, true) << endl;

  return 0;
}
*/

//==============================================================================================================================================

// 3 . Evaluate Expression to True / Boolean Parenthesization(memorized)

#include <bits/stdc++.h>
using namespace std;

// Memoization table
unordered_map<string, int> dp;

int countWays(string &s, int i, int j, bool isTrue)
{
  // Base case: If the subexpression has only one character
  if (i == j)
  {
    if (isTrue)
      return s[i] == 'T';
    else
      return s[i] == 'F';
  }

  // Check if result is already computed
  string key = to_string(i) + "_" + to_string(j) + "_" + to_string(isTrue);
  if (dp.find(key) != dp.end())
    return dp[key];

  int ways = 0;

  // Iterate over operators
  for (int k = i + 1; k < j; k += 2)
  {
    char op = s[k]; // Operator at position k

    // Recursively calculate left and right partitions
    int leftTrue = countWays(s, i, k - 1, true);
    int leftFalse = countWays(s, i, k - 1, false);
    int rightTrue = countWays(s, k + 1, j, true);
    int rightFalse = countWays(s, k + 1, j, false);

    // Apply the Boolean operation
    if (op == '&')
    {
      if (isTrue)
        ways += leftTrue * rightTrue;
      else
        ways += (leftTrue * rightFalse) + (leftFalse * rightTrue) + (leftFalse * rightFalse);
    }
    else if (op == '|')
    {
      if (isTrue)
        ways += (leftTrue * rightTrue) + (leftTrue * rightFalse) + (leftFalse * rightTrue);
      else
        ways += leftFalse * rightFalse;
    }
    else if (op == '^')
    {
      if (isTrue)
        ways += (leftTrue * rightFalse) + (leftFalse * rightTrue);
      else
        ways += (leftTrue * rightTrue) + (leftFalse * rightFalse);
    }
  }

  return dp[key] = ways; // Store the computed result
}

int main()
{
  string expression = "T|F&T^T"; // Boolean expression
  int n = expression.size();

  dp.clear(); // Clear memoization table
  cout << "Number of ways to evaluate the expression to true: "
       << countWays(expression, 0, n - 1, true) << endl;

  return 0;
}
