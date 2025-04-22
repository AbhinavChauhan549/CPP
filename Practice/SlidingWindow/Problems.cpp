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

// Longest Repeating Character Replacement ( two pointers)

/*
int characterReplacement(string s, int k) {
  unordered_map<char, int> freqs;
  int res = 0, i = 0, maxFreq = 0;

  for (int j = 0; j < s.size(); j++) {
      freqs[s[j]]++;
      maxFreq = max(maxFreq, freqs[s[j]]);

      while ((j - i + 1) - maxFreq > k) {
          freqs[s[i]]--;
          i++;
      }

      res = max(res, j - i + 1);
  }

  return res;
}*/

//=================================================================================================================================================

// Binary Subarrays with Sum / count of subarrays with sum k

/*
int f(vector<int>& nums, int goal) {
  int n = nums.size();
  if (goal < 0) return 0;  // Edge case for negative goal
  int l = 0, r = 0, count = 0, currSum = 0;

  while (r < n) {
      currSum += nums[r];
      while (currSum > goal) {
          currSum -= nums[l];
          l++;
      }
      count += (r - l + 1);  // Number of valid subarrays
      r++;
  }
  return count;
}

int numSubarraysWithSum(vector<int>& nums, int goal) {
  return f(nums, goal) - f(nums, goal - 1);
}
  */

// ==============================================================================================================================================

// Count the number of nice subarrays

/*
Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.


int numberOfSubarrays(vector<int>& nums, int k) {
  int ansCnt = 0; // Final count of subarrays
  int cnt = 0;    // Count of valid subarrays ending at current position
  int i = 0, j = 0; // Two pointers for the sliding window

  while (j < nums.size()) {
      if (nums[j] % 2 != 0) { // If the current element is odd
          k--; // Decrement k as we have encountered an odd number
          cnt = 0; // Reset the count of valid subarrays ending at this position
      }

      while (k == 0) { // While we have exactly k odd numbers in the window
          if (nums[i] % 2 != 0) { // If the leftmost element of the window is odd
              k++; // Increment k as we will remove this odd number
          }
          cnt++; // Increment count of valid subarrays ending at current position
          i++; // Move the left pointer of the window to the right
      }

      ansCnt += cnt; // Add the count of valid subarrays to the final answer
      j++; // Move the right pointer of the window to the right
  }

  return ansCnt; // Return the final count of subarrays with exactly k odd numbers
}
  */

//=========================================================================================================================================

// Subarrays with k distinct integers : we have to return the number of subarrays with k distinct integers

/*
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int atMostK(const vector<int> &nums, int k)
{
  unordered_map<int, int> freq;
  int left = 0, right = 0, count = 0;

  for (; right < nums.size(); ++right)
  {
    if (freq[nums[right]] == 0)
      k--;
    freq[nums[right]]++;

    while (k < 0)
    {
      freq[nums[left]]--;
      if (freq[nums[left]] == 0)
        k++;
      left++;
    }

    count += right - left + 1;
  }

  return count;
}

int subarraysWithKDistinct(const vector<int> &nums, int k)
{
  return atMostK(nums, k) - atMostK(nums, k - 1);
}

int main()
{
  vector<int> nums = {1, 2, 1, 2, 3};
  int k = 2;
  cout << "Number of subarrays with " << k << " distinct integers: "
       << subarraysWithKDistinct(nums, k) << endl;

  return 0;
}
*/

//===============================================================================================================================================

// Minimum Window Substring

/*
Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.
class Solution {
  public:
      string minWindow(string s, string t) {
      if (s.empty() || t.empty()) return "";

      int hash[256] = {0};
      for (char c : t) hash[c]++;

      int l = 0, r = 0, count = t.size();
      int minLen = INT_MAX, start = 0;

      while (r < s.size()) {
          if (hash[s[r]] > 0) count--;
          hash[s[r]]--;
          r++;

          while (count == 0) {
              if (r - l < minLen) {
                  minLen = r - l;
                  start = l;
              }

              hash[s[l]]++;
              if (hash[s[l]] > 0) count++;
              l++;
          }
      }

      return minLen == INT_MAX ? "" : s.substr(start, minLen);
  }

  };

  */