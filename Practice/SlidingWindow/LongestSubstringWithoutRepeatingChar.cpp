#include <iostream>
using namespace std;
int main()
{

  string s = "cadbzabcd";

  int n = s.length();
  int l = 0, r = 0, maxlen = 0;

  int hash[256] = {-1}; // sets all values to -1 and it is used to check the last index of the character

  while (r < n)
  {
    if (hash[s[r]] != -1)
    {
      if (hash[s[r]] >= l)
      {
        l = hash[s[r]] + 1; // update the left pointer to the next index of the last occurrence of s[r]
      }
    }

    int len = r - l + 1;       // calculate the length of the current substring
    maxlen = max(maxlen, len); // update the maximum length if the current length is greater
    hash[s[r]] = r;            // update the hash table with the current index of s[r]
    r++;
  }
  cout << "Max length of substring without repeating characters is: " << maxlen << endl;
  return 0;
}