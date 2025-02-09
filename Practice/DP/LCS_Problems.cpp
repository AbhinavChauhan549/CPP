// 1 Longest Common substring
/*
#include <iostream>
using namespace std;
int LCSubstringtopDown(string x, string y, int n, int m)
{
  if (n == 0 || m == 0)
  {
    return 0;
  }

  int dp[n + 1][m + 1];
  int result = 0;

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < m + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < m + 1; j++)
    {
      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
        result = max(result, dp[i][j]);
      }
      else
      {
        dp[i][j] = 0;
      }
    }
  }
  return result;
}

// Recursive approach

int Recursive(string &x, string &y, int n, int m, int count, int &maxlength)
{
  if (n == 0 || m == 0)
  {
    return count;
  }

  int newCount = count;

  if (x[n - 1] == y[m - 1])
  {
    newCount = Recursive(x, y, n - 1, m - 1, count + 1, maxlength);
  }

  maxlength = max(maxlength, newCount);

  Recursive(x, y, n - 1, m, 0, maxlength);
  Recursive(x, y, n, m - 1, 0, maxlength);

  return maxlength;
}

int LongestCommonSubstring(string x, string y)
{
  int maxlength = 0;
  Recursive(x, y, x.size(), y.size(), 0, maxlength);
  return maxlength;
}
int main()
{
  string x = "abcde";
  string y = "abfce";
  int n = x.length();
  int m = y.length();

  cout << LCSubstringtopDown(x, y, n, m) << endl;

  cout << LongestCommonSubstring(x, y) << endl;
  return 0;
}
*/

//====================================================================================================================================================================================

// 2 Printing Longest Common Subsequence
/*
#include <iostream>
using namespace std;

string PrintLCSRecursive(string x, string y, int n, int m)
{

  if (n == 0 || m == 0)
  {
    return "";
  }

  if (x[n - 1] == y[m - 1])
  {
    return PrintLCSRecursive(x, y, n - 1, m - 1) + x[n - 1];
  }
  else
  {
    string a = PrintLCSRecursive(x, y, n - 1, m);
    string b = PrintLCSRecursive(x, y, n, m - 1);
    return a.length() > b.length() ? a : b;
  }
}

// top down approach

string PrintLCS(string x, string y, int n, int m)
{

  if (n == 0 || m == 0)
  {
    return "";
  }

  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < m + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {

    for (int j = 1; j < m + 1; j++)
    {

      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  int i = n;
  int j = m;
  string result = "";

  while (i > 0 && j > 0)
  {
    if (x[i - 1] == y[j - 1])
    {
      result = x[i - 1] + result;
      i--;
      j--;
    }
    else
    {
      if (dp[i - 1][j] > dp[i][j - 1])
      {
        i--;
      }
      else
      {
        j--;
      }
    }
  }
  return result;
}
int main()
{
  string x = "abcde";
  string y = "abfce";
  int n = x.length();
  int m = y.length();
  cout << PrintLCSRecursive(x, y, n, m) << endl;
  cout << PrintLCS(x, y, n, m) << endl;
  return 0;
}
  */

//==============================================================================================================================================================

// 3 Shortest Common Supersequence
/*
#include <iostream>
using namespace std;
int SCS(string x, string y, int n, int m)
{

  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < m + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < m + 1; j++)
    {

      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  return n + m - dp[n][m];
}
int main()
{
  string x = "AGGTAB";
  string y = "GXTXAYB";
  int n = x.length();
  int m = y.length();

  cout << SCS(x, y, n, m) << endl;
  return 0;
}
  */

//===============================================================================================================================================================

// 4 Minimum number of insertions and deletions to convert string a to string b
/*
#include <iostream>
using namespace std;

int NoInsDel(string x, string y, int n, int m)
{
  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < m + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = 1; j < m + 1; j++)
    {
      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  // number of deletions = length of string a - length of LCS
  // number of insertions = length of string b - length of LCS
  return m + n - (2 * dp[n][m]);
}
int main()
{
  string x = "heap";
  string y = "pea";
  int n = x.length();
  int m = y.length();
  cout << NoInsDel(x, y, n, m) << endl;
  return 0;
}
  */

//=============================================================================================================================================

// 5 Longest Palindromic Subsequence
// LPS(string a )= LCS(a,reverse(a))
/*
#include <iostream>
#include <algorithm>
using namespace std;

int LPalindromicSubsequence(string x, string y, int n, int m)
{

  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {

    for (int j = 0; j < m + 1; j++)
    {

      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {

    for (int j = 1; j < m + 1; j++)
    {

      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  return dp[n][m];
}
int main()
{
  string x = "agbcba";
  string y = x;
  reverse(y.begin(), y.end());
  int n = x.length();
  int m = y.length();

  cout << LPalindromicSubsequence(x, y, n, m) << endl;
  return 0;
}
*/

//==============================================================================================================================================

// 6 Minimum number of deletions to make a string palindrome
/*
#include <iostream>
#include <algorithm>
using namespace std;

int LPalindromicSubsequence(string x, string y, int n, int m)
{

  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {

    for (int j = 0; j < m + 1; j++)
    {

      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {

    for (int j = 1; j < m + 1; j++)
    {

      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  // length of string - length of LCS = min number of deletions
  return n - dp[n][m];
}
int main()
{
  string x = "agbcba";
  string y = x;
  reverse(y.begin(), y.end());
  int n = x.length();
  int m = y.length();

  cout << LPalindromicSubsequence(x, y, n, m) << endl;
  return 0;
}
  */

//==============================================================================================================================================

// 7 Shortest Common Supersequence
/*
#include <iostream>
using namespace std;

string PrintLCSRecursive(string x, string y, int n, int m)
{

  if (n == 0 || m == 0)
  {
    return "";
  }

  if (x[n - 1] == y[m - 1])
  {
    return PrintLCSRecursive(x, y, n - 1, m - 1) + x[n - 1];
  }
  else
  {
    string a = PrintLCSRecursive(x, y, n - 1, m);
    string b = PrintLCSRecursive(x, y, n, m - 1);
    return a.length() > b.length() ? a : b;
  }
}

// top down approach

string PrintSCS(string x, string y, int n, int m)
{

  if (n == 0 || m == 0)
  {
    return "";
  }

  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < m + 1; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {

    for (int j = 1; j < m + 1; j++)
    {

      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  int i = n;
  int j = m;
  string result = "";

  while (i > 0 && j > 0)
  {
    if (x[i - 1] == y[j - 1])
    {
      result = x[i - 1] + result;
      i--;
      j--;
    }
    else
    {
      if (dp[i - 1][j] > dp[i][j - 1])
      {
        result = x[i - 1] + result;
        i--;
      }
      else
      {
        result = y[j - 1] + result;
        j--;
      }
    }
  }
  while (i > 0)
  {
    result = x[i - 1] + result;
    i--;
  }
  while (j > 0)
  {
    result = y[j - 1] + result;
    j--;
  }
  return result;
}
int main()
{
  string x = "abcde";
  string y = "abfce";
  int n = x.length();
  int m = y.length();
  // cout << PrintLCSRecursive(x, y, n, m) << endl;
  cout << PrintSCS(x, y, n, m) << endl;
  return 0;
}
  */

//==============================================================================================================================================

// 8 Longest Repeating Subsequence
/*
#include <iostream>
using namespace std;
int LongestRepeatingSubsequence(string x, string y, int n, int m)
{

  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {

    for (int j = 0; j < m + 1; j++)
    {

      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {

    for (int j = 1; j < m + 1; j++)
    {

      if (x[i - 1] == y[j - 1] && i != j)
      {

        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {

        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  return dp[n][m];
}
int main()
{
  string x = "aabebcdd";
  string y = x;
  int n = x.length();
  int m = y.length();
  cout << LongestRepeatingSubsequence(x, y, n, m) << endl;
  return 0;
}
  */

//==============================================================================================================================================

// 9 Sequence Pattern Matching : is string a is a subsequence of string b

#include <iostream>
using namespace std;
bool SequencePatternMatching(string x, string y, int n, int m)
{

  int dp[n + 1][m + 1];

  for (int i = 0; i < n + 1; i++)
  {

    for (int j = 0; j < m + 1; j++)
    {

      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < n + 1; i++)
  {

    for (int j = 1; j < m + 1; j++)
    {

      if (x[i - 1] == y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  if (dp[n][m] == n)
  {
    return true;
  }
  return false;
}
int main()
{
  string x = "AXY";
  string y = "ADXCPY";
  int n = x.length();
  int m = y.length();

  cout << SequencePatternMatching(x, y, n, m) << endl;
  return 0;
}