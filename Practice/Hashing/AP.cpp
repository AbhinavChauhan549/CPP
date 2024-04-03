// AP mein difference same hota hai
//============================================without Hashing=========================================================
// C++ program to check if a given array
// can form arithmetic progression
#include <bits/stdc++.h>
using namespace std;

// Returns true if a permutation of arr[0..n-1]
// can form arithmetic progression
bool checkIsAP(int arr[], int n)
{
  if (n == 1)
    return true;

  // Sort array
  sort(arr, arr + n);

  // After sorting, difference between
  // consecutive elements must be same.
  int d = arr[1] - arr[0];
  for (int i = 2; i < n; i++)
    if (arr[i] - arr[i - 1] != d)
      return false;

  return true;
}

// Driven Program
int main()
{
  int arr[] = {20, 15, 5, 0, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  (checkIsAP(arr, n)) ? (cout << "Yes" << endl) : (cout << "No" << endl);

  return 0;
}
//==================================Using HashMap ======================================================

/*
// C++ program to check if a given array
// can form arithmetic progression
#include <bits/stdc++.h>
using namespace std;

// Returns true if a permutation of arr[0..n-1]
// can form arithmetic progression
bool checkIsAP(int arr[], int n)
{
  unordered_map<int, int> hm;
  int smallest = INT_MAX, second_smallest = INT_MAX;
  for (int i = 0; i < n; i++) {

    // Find the smallest and
    // update second smallest
    if (arr[i] < smallest) {
      second_smallest = smallest;
      smallest = arr[i];
    }

    // Find second smallest
    else if (arr[i] != smallest
        && arr[i] < second_smallest)
      second_smallest = arr[i];

    // Check if the duplicate element found or not
    if (hm.find(arr[i]) == hm.end())
      hm[arr[i]]++;

    // If duplicate found then return false
    else
      return false;
  }

  // Find the difference between smallest and second
  // smallest

  int diff = second_smallest - smallest;

  // As we have used smallest and
  // second smallest,so we
  // should now only check for n-2 elements
  for (int i = 0; i < n - 1; i++) {
    if (hm.find(second_smallest) == hm.end())
      return false;
    second_smallest += diff;
  }
  return true;
}

// Driven Program
int main()
{
  int arr[] = { 20, 15, 5, 0, 10 };
  int n = sizeof(arr) / sizeof(arr[0]);

  (checkIsAP(arr, n)) ? (cout << "Yes" << endl)
            : (cout << "No" << endl);

  return 0;

  // This code is contributed by Raman Jha
}

*/