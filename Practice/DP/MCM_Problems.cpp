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
/*
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
*/

//==============================================================================================================================================

// 4. Scramble String
/*
#include <iostream>
#include <unordered_map>
using namespace std;

bool solveRecursive(string s1, string s2)
{

  int n = s1.length();
  int m = s2.length();

  if (n != m)
  {
    return false;
  }
  if (s1 == s2)
  {
    return true;
  }
  if (n <= 1)
  {
    return false;
  }
  bool flag = false;
  for (int i = 1; i < n; i++)
  {
    bool cond1 = (solveRecursive(s1.substr(0, i), s2.substr(n - i, i)) && solveRecursive(s1.substr(i, n - i), s2.substr(0, n - i)));
    bool cond2 = (solveRecursive(s1.substr(0, i), s2.substr(0, i)) && solveRecursive(s1.substr(i, n - i), s2.substr(i, n - i)));
    if (cond1 || cond2)
    {
      flag = true;
      break;
    }
  }
  return flag;
}

// Memoization
bool solve(string s1, string s2, unordered_map<string, bool> &dp)
{

  int n = s1.length();
  int m = s2.length();

  if (n != m)
  {
    return false;
  }
  if (s1 == s2)
  {
    return true;
  }
  if (n <= 1)
  {
    return false;
  }
  string key = s1 + "_" + s2;
  if (dp.find(key) != dp.end())
  {
    return dp[key];
  }
  bool flag = false;
  for (int i = 1; i < n; i++)
  {
    bool cond1 = (solve(s1.substr(0, i), s2.substr(n - i, i), dp) && solve(s1.substr(i, n - i), s2.substr(0, n - i), dp));
    bool cond2 = (solve(s1.substr(0, i), s2.substr(0, i), dp) && solve(s1.substr(i, n - i), s2.substr(i, n - i), dp));
    if (cond1 || cond2)
    {
      flag = true;
      break;
    }
  }
  dp[key] = flag;
  return flag;
}

int main()
{
  string s1 = "great";
  string s2 = "rgeat";

  int n = s1.length();
  int m = s2.length();

  if (n != m)
  {
    cout << false << endl;
    return 0;
  }
  if (s1 == s2)
  {
    cout << true << endl;
    return 0;
  }
  cout << solveRecursive(s1, s2) << endl;
  unordered_map<string, bool> dp;
  cout << solve(s1, s2, dp);

  return 0;
}
  */

//==============================================================================================================================================

// 5. Egg Dropping Problem
/*
#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

int EDP(int eggs, int floors)
{

  if (eggs == 1 || floors == 0 || floors == 1)
  {
    return floors;
  }
  int min = INT_MAX;
  for (int i = 1; i <= floors; i++)
  {
    int left = EDP(eggs - 1, i - 1);
    int right = EDP(eggs, floors - i);
    int steps = 1 + max(left, right);
    if (steps < min)
    {
      min = steps;
    }
  }
  return min;
}

// Memorized Approach
int EDPMemorized(int eggs, int floors, int **dp)
{

  if (eggs == 1 || floors == 0 || floors == 1)
  {
    return floors;
  }

  if (dp[eggs][floors] != -1)
  {
    return dp[eggs][floors];
  }

  int min = INT_MAX;

  for (int i = 1; i <= floors; i++)
  {
    int left = EDPMemorized(eggs - 1, i - 1, dp);
    int right = EDPMemorized(eggs, floors - i, dp);
    int steps = 1 + max(left, right);
    if (steps < min)
    {
      min = steps;
    }
  }
  return dp[eggs][floors] = min;
}

// Optimized Memorized Approach

int EDPMemorizedOptimized(int eggs, int floors, int **dp)
{

  if (eggs == 1 || floors == 0 || floors == 1)
  {
    return floors;
  }

  if (dp[eggs][floors] != -1)
  {
    return dp[eggs][floors];
  }

  int min = INT_MAX;

  for (int i = 1; i <= floors; i++)
  {
    int left = EDPMemorizedOptimized(eggs - 1, i - 1, dp);
    int right = EDPMemorizedOptimized(eggs, floors - i, dp);
    int steps = 1 + max(left, right);
    if (steps < min)
    {
      min = steps;
    }
  }
  return dp[eggs][floors] = min;
}
int main()
{
  int egg = 3;
  int floor = 5;

  cout << EDP(egg, floor) << endl;

  int **dp = new int *[egg + 1];

  for (int i = 0; i < egg + 1; i++)
  {
    dp[i] = new int[floor + 1];
  }

  for (int i = 0; i < egg + 1; i++)
  {
    for (int j = 0; j < floor + 1; j++)
    {
      dp[i][j] = -1;
    }
  }

  cout << EDPMemorized(egg, floor, dp) << endl;
  cout << EDPMemorizedOptimized(egg, floor, dp);
  return 0;
}
  */

//==============================================================================================================================================

// DP on Tree

// 1. Diameter of Binary Tree
/*
#include <iostream>
#include <climits>
using namespace std;

struct Node
{
  int data;
  Node *left, *right;
};

int height(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int left = height(root->left);
  int right = height(root->right);
  return 1 + max(left, right);
}

int diameter(Node *root, int &result)
{
  if (root == NULL)
  {
    return 0;
  }
  int left = diameter(root->left, result);
  int right = diameter(root->right, result);
  int temp = 1 + max(left, right);
  int ans = max(temp, 1 + left + right);
  result = max(result, ans);

  return temp;
}

int main()
{
  int result = INT_MIN;
  // diameter(root,result);
  return result;
}

*/

//==============================================================================================================================================

// 2. Maximum Path Sum in a Binary Tree any node to any node
/*
int solve(Node *root, int &result)
{
  if (root == NULL)
  {
    return 0;
  }
  int left = solve(root->left, result);
  int right = solve(root->right, result);
  int temp = max(max(left, right) + root->data, root->data);
  int ans = max(temp, root->data + left + right);
  result = max(result, ans);

  return temp;
}
  */

//==============================================================================================================================================

// 3. Maximum Path Sum in a Binary Tree leaf to leaf
/*
int solve(Node *root, int &result)
{
  if (root == NULL)
  {
    return 0;
  }
  int left = solve(root->left, result);
  int right = solve(root->right, result);
  int temp = max(left, right) + root->data if (root->left == NULL && root->right == NULL)
  {
    temp = max(temp, root->data);
  }
  int ans = max(temp, root->data + left + right);
  result = max(result, ans);

  return temp;
}
  */