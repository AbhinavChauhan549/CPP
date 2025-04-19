#include <iostream>
using namespace std;
int main()
{

  int arr[11] = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};

  int k = 2;

  int l = 0, r = 0, maxlen = 0, zeroes = 0;

  while (r < sizeof(arr) / sizeof(arr[0]))
  {
    if (arr[r] == 0)
    {
      zeroes++;
    }
    if (zeroes > k)
    {
      if (arr[l] == 0)
      {
        zeroes--;
      }
      l++;
    }

    if (zeroes <= k)
    {
      maxlen = max(maxlen, r - l + 1);
    }

    r++;
  }

  cout << maxlen << endl;
  return 0;
}