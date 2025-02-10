// MCM Problems : we are given a sequence of matrices of different dimensions to be multiplied, we need to find the most efficient way or cost to multiply these matrices.

// 1. Matrix Chain Multiplication
// 2. Print MCM
// 3. Evaluate Expression to True / Boolean Parenthesization
// 4. Scrambled String
// 5. Egg Dropping Problem
// 6. Palindrome Partitioning
// 7. Min and Max Values of an Expression

#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

// Recursive Approach
int MatrixChainMultiplication(int p[], int i, int j)
{

  if (i == j)
  {
    return 0;
  }

  int min = INT_MAX;

  for (int k = i; k < j; k++)
  {
    int temp = MatrixChainMultiplication(p, i, k) + MatrixChainMultiplication(p, k + 1, j) + p[i - 1] * p[k] * p[j];
    if (temp < min)
    {
      min = temp;
    }
  }
  return min;
}

// Memorized Approach
int MCMMemorized(int p[], int i, int j, int dp[10][10])
{

  if (i == j)
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
    int temp = MCMMemorized(p, i, k, dp) + MCMMemorized(p, k + 1, j, dp) + p[i - 1] * p[k] * p[j];
    if (temp < min)
    {
      min = temp;
    }
  }
  return dp[i][j] = min;
}

int MCMMemorized(int p[], int i, int j)
{
  int dp[10][10];
  memset(dp, -1, sizeof(dp));
  return MCMMemorized(p, i, j, dp);
}
int main()
{
  int arr[] = {40, 20, 30, 10, 30};
  cout << MatrixChainMultiplication(arr, 1, 4) << endl;
  cout << MCMMemorized(arr, 1, 4) << endl;
  return 0;
}