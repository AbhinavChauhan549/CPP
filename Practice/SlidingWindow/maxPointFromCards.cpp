#include <iostream>
using namespace std;
int main()
{
  int arr[9] = {6, 2, 3, 4, 7, 2, 1, 7, 1};
  int k = 4;

  int n = sizeof(arr) / sizeof(arr[0]);

  int lsum = 0, rsum = 0, maxsum = 0;

  for (int i = 0; i < k; i++)
  {
    lsum += arr[i];
  }

  maxsum = lsum;

  int rindex = n - 1;
  for (int i = k - 1; i >= 0; i--)
  {
    rsum += arr[rindex];
    lsum = lsum - arr[i];
    maxsum = max(maxsum, lsum + rsum);
    rindex--;
  }

  cout << "Max sum of " << k << " cards is: " << maxsum << endl;
  return 0;
}