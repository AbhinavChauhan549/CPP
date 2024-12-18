// 1 Subset Sum Problem

// we need to check whether the subarray having its total equal to sum exist or not

/*#include <iostream>
using namespace std;

bool subsetSum(int arr[], int sum, int n)
{
  // initializatton
  bool t[n + 1][sum + 1];
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      if (j == 0)
      {
        t[i][j] = false;
      }
      if (i == 0)
      {
        t[i][j] = true;
      }
    }
  }

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      if (arr[i - 1] <= j)
      {
        t[i][j] = t[i][j - arr[i - 1]] || t[i - 1][j];
      }
      else
      {
        t[i][j] = t[i - 1][j];
      }
    }
  }

  return t[n][sum];
}

int main()
{

  int arr[5] = {2, 3, 7, 8, 10};
  int sum = 11;
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << subsetSum(arr, sum, n);

  return 0;
}*/

// ===================================================================================================================================

// 2 Equal Sum Partition

// we need to check whether the subarray of the array have equal sum or not

/*
#include <iostream>
using namespace std;

bool subsetSum(int arr[], int sum, int n)
{
  // initializatton
  bool t[n + 1][sum + 1];
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      if (j == 0)
      {
        t[i][j] = false;
      }
      if (i == 0)
      {
        t[i][j] = true;
      }
    }
  }

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      if (arr[i - 1] <= j)
      {
        t[i][j] = t[i][j - arr[i - 1]] || t[i - 1][j];
      }
      else
      {
        t[i][j] = t[i - 1][j];
      }
    }
  }

  return t[n][sum];
}

int main()
{
  int arr[6] = {5, 1, 5, 3, 7, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  if (sum % 2 != 0)
  {
    cout << "false";
  }
  else if (sum % 2 == 0)
  {
    cout << subsetSum(arr, sum / 2, n);
  }
  return 0;
}
*/

//====================================================================================================================================

// 3 Count of Subset of a given sum

// in this problem we need to count the number of subsets of a given sum
/*
#include <iostream>
using namespace std;

int countOFSubset(int arr[], int sum, int n)
{
  int t[n + 1][sum + 1];

  // Initialize the table
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      if (j == 0)
        t[i][j] = 1; // 1 way to achieve sum 0
      else if (i == 0)
        t[i][j] = 0; // No way to achieve positive sum with no elements
    }
  }

  // Fill the table
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      if (arr[i - 1] <= j)
      {
        t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
      }
      else
      {
        t[i][j] = t[i - 1][j];
      }
    }
  }

  return t[n][sum];
}

int main()
{
  int arr[6] = {2, 3, 5, 6, 8, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  int sum = 10;

  cout << "Count of subsets with sum " << sum << ": " << countOFSubset(arr, sum, n) << endl;

  return 0;
}
*/

// ==================================================================================================================================

// 4 Minimum Subset Sum

// in this problem we need to check whether the difference of sum between two subsets is minimum
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minimumSubsetSum(int arr[], int sum, int n)
{
  // DP table to store subset sums
  bool t[n + 1][sum + 1];

  // Initialize DP table
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= sum; j++)
    {
      if (j == 0)
        t[i][j] = true; // Sum 0 is always possible
      else if (i == 0)
        t[i][j] = false; // Non-zero sum is not possible with 0 elements
      else if (arr[i - 1] <= j)
        t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
      else
        t[i][j] = t[i - 1][j];
    }
  }

  // Find all possible subset sums up to sum / 2
  vector<int> possibleSums;
  for (int i = 0; i <= sum / 2; i++)
  {
    if (t[n][i])
      possibleSums.push_back(i);
  }

  // Calculate the minimum difference
  int mini = INT_MAX;
  for (int s1 : possibleSums)
  {
    mini = min(mini, sum - 2 * s1);
  }
  return mini;
}

int main()
{
  int arr[] = {1, 3, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  int range = 0;

  // Calculate the total sum of the array
  for (int i = 0; i < n; i++)
  {
    range += arr[i];
  }

  cout << "Minimum Subset Sum Difference: " << minimumSubsetSum(arr, range, n) << endl;
  return 0;
}
