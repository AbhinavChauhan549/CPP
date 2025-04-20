// find the length of the longest substring with at most K distinct characters

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//   string s = "aaabbccd";
//   int n = s.length();
//   int k = 2;

//   int l = 0;
//   int r = 0;
//   int maxlen = 0;

//   map<char, int> mp;

//   while (r < n)
//   {
//     mp[s[r]]++;

//     if (mp.size() > k)
//     {
//       mp[s[l]]--;
//       if (mp[s[l]] == 0)
//       {
//         mp.erase(s[l]);
//       }
//       l++;
//     }

//     if (mp.size() <= k)
//     {
//       maxlen = max(maxlen, r - l + 1);
//     }
//     r++;
//   }

//   cout << maxlen << endl;

//   return 0;
// }

//=================================================================================================================================================

// Number of Substrings containing all three characters
/*
int numberOfSubstrings(string s) {
  vector<int> lastSeen(3, -1);
  int count = 0;

  for (int i = 0; i < s.size(); i++) {
      lastSeen[s[i] - 'a'] = i;
      if (lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1) {
          count += 1 + min({lastSeen[0], lastSeen[1], lastSeen[2]});
      }
  }
  return count;
}
*/

//=================================================================================================================================================

//