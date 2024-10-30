#include <iostream>
using namespace std;
int main()
{
  int arr[11] = {10, 2, 5, 4, 1, 2, 3, 2, 6, 2, 2};
  int ans[11];

  for (int i = 1; i < 11; i++)
  {
    for (int j = 0; j < 11; j++)
    {
      ans[j]++;
      if (arr[i] == arr[j])
      {
        ans[j]++;
      }
    }
  }
  int max = -1;
  for (int i = 0; i < 11; i++)
  {
    if (ans[i] > max)
    {
      max = ans[i];
    }
  }
  cout << "Maximum Occurence is : " << max;
  return 0;
}