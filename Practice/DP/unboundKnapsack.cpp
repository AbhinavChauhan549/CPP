// unbound knapsack problems
// 1 Rod cutting problem
// 2 Coin Change I ( max no of ways )
// 3 Coin Change II ( min no of coins )
// 4 Maximum Ribbon Cut

// ------------------------------------------Unbounded Knapsack-----------------------------------------------------------------------
/*
#include <bits/stdc++.h>
#include <limits>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
int knapsackTopDown(int wt[], int val[], int w, int n)
{

  int t[n + 1][w + 1];
  // initialization

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < w + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        t[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < w + 1; j++)
    {

      if (wt[i - 1] <= j)
      {
        t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
      }

      else
      {
        t[i][j] = t[i - 1][j];
      }
    }
  }
  return t[n][w];
}

int main()
{
  int wt[4] = {1, 3, 4, 5};
  int val[4] = {1, 4, 5, 7};
  int threshold = 7;
  cout << knapsackTopDown(wt, val, threshold, 4);
  return 0;
}
*/

//====================================================================================================================================================

// 1 Rod Cut Problem

// explaination: a rod is cut into pieces and we need to get the pieces with max profit

// #include <bits/stdc++.h>
// #include <limits>
// #include <cmath>
// #include <algorithm>
// #include <iostream>
// using namespace std;
// int rodCut(int length[], int price[], int w, int n)
// {

//   int t[n + 1][w + 1];
//   // initialization

//   for (int i = 0; i < n + 1; i++)
//   {
//     for (int j = 0; j < w + 1; j++)
//     {
//       if (i == 0 || j == 0)
//       {
//         t[i][j] = 0;
//       }
//     }
//   }

//   for (int i = 1; i < n + 1; i++)
//   {
//     for (int j = 1; j < w + 1; j++)
//     {

//       if (length[i - 1] <= j)
//       {
//         t[i][j] = max(price[i - 1] + t[i][j - length[i - 1]], t[i - 1][j]);
//       }

//       else
//       {
//         t[i][j] = t[i - 1][j];
//       }
//     }
//   }
//   return t[n][w];
// }

// int main()
// {
//   int length[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//   int price[8] = {1, 5, 8, 9, 10, 17, 17, 20};
//   int N = 8;
//   int len = sizeof(length) / sizeof(length[0]);
//   cout << rodCut(length, price, len + 1, N + 1); // most of the cases me len+1 or N+1 same hi hote hai
//   return 0;
// }

//==============================================================================================================================================

// 2 Coin Change I ( min no of coins )

#include <bits/stdc++.h>
#include <limits>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;

int coinChange(int coins[], int n, int sum)
{
  int t[n + 1][sum + 1];
  // initialization
  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < sum + 1; j++)
    {
      if (i == 0)
      {
        t[i][j] = INT_MAX - 1;
      }
      if (j == 0)
      {
        t[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < sum + 1; j++)
    {
      if (coins[i - 1] <= j)
      {
        t[i][j] = min(1 + t[i][j - coins[i - 1]], t[i - 1][j]);
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
  int coins[3] = {
      1,
      2,
      3,
  };
  int sum = 5;
  cout << coinChange(coins, 3, sum);
  return 0;
}