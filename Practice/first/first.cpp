#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[5] = {1, 5, 3, 9, 7};
  // sort(arr.begin(), arr.end());
  // cout << arr[3] << "";

  int largest = INT_MIN, secondlargest = 0;

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }

    if (secondlargest < arr[i] && secondlargest < largest)
    {
      secondlargest = arr[i];
    }
  }
  cout << secondlargest << " ";
  return 0;
}