/*
types of knapsack :
fractional
01
unbounded


steps of solving DP : recursive solution => memorization of solution => Top down solution

 0 1 knapsack problems (only minors changes as compared to 01 knapsack problem):
 1-Subset sum
 2-Equal sum partition
 3-count of subset sum
 4-minimum subset sum difference
 5-Target sum
 6-# of subset e gives d/f

 */
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Recursive knapsack solution
int knapsack(int wt[], int val[], int threshold, int sizeofarr)
{
  // Base Condition
  if (sizeofarr == 0 || threshold == 0)
  {
    return 0;
  }

  // Choice Diagram

  // choice 1
  if (wt[sizeofarr - 1] <= threshold)
  {
    return max(val[sizeofarr - 1] + knapsack(wt, val, threshold - wt[sizeofarr - 1], sizeofarr - 1), knapsack(wt, val, threshold, sizeofarr - 1));
  }

  // choice 2
  else if (wt[sizeofarr - 1] > threshold)
  {
    return knapsack(wt, val, threshold, sizeofarr - 1);
  }
}

// Memorization
// int t[sizeofarr+1][threshold+1];  to store the n and w whole not only upto n-1 or w-1

vector<vector<int>> t;
int knapsack2(int wt[], int val[], int threshold, int sizeofarr)
{
  // Base Condition
  if (sizeofarr == 0 || threshold == 0)
  {
    return 0;
  }

  if (t[sizeofarr][threshold] != -1)
  {
    return t[sizeofarr][threshold];
  }

  // Choice Diagram
  if (wt[sizeofarr - 1] <= threshold)
  {
    return t[sizeofarr][threshold] = max(val[sizeofarr - 1] + knapsack(wt, val, threshold - wt[sizeofarr - 1], sizeofarr - 1), knapsack(wt, val, threshold, sizeofarr - 1));
  }

  else if (wt[sizeofarr - 1] > threshold)
  {
    return knapsack(wt, val, threshold, sizeofarr - 1);
  }
}

// Top down
// in this we create matrix with respect to the changing variables as the dimension of the matrix
// the base condition of recursive solution becomes the initialization condition for the top down approach
// int n = 100;
// int w=1000;

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
        t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
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

  return 0;
}
