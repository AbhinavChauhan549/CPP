// find the length of the longest substring with at most K distinct characters

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

  string s = "aaabbccd";
  int n = s.length();
  int k = 2;

  int l = 0;
  int r = 0;
  int maxlen = 0;

  map<char, int> mp;

  while (r < n)
  {
    mp[s[r]]++;

    if (mp.size() > k)
    {
      mp[s[l]]--;
      if (mp[s[l]] == 0)
      {
        mp.erase(s[l]);
      }
      l++;
    }

    if (mp.size() <= k)
    {
      maxlen = max(maxlen, r - l + 1);
    }
  }

  cout << maxlen << endl;

  return 0;
}