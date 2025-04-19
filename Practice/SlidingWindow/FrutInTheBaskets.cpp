#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

  int arr[11] = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 2;

  int l = 0, r = 0, maxlen = 0;
  map<int, int> mp;

  while (r < n)
  {

    mp[arr[r]]++;

    if (mp.size() > k)
    {
      mp[arr[l]]--;
      if (mp[arr[l]] == 0)
      {
        mp.erase(arr[l]);
      }
      l++;
    }

    if (mp.size() <= k)
    {
      maxlen = max(maxlen, r - l + 1);
    }

    r++;
  }

  cout << maxlen << endl;

  return 0;
}