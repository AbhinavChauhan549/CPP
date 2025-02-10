// 1. Palindrome Partitioning

#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
  while (i < j)
  {
    if (s[i] != s[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int PPRecursive(string s, int i, int j)
{
  if (i >= j)
  {
    return 0;
  }
  if (isPalindrome(s, i, j))
  {
    return 0;
  }
  int min = INT_MAX;
  for (int k = i; k < j; k++)
  {
    int temp = 1 + PPRecursive(s, i, k) + PPRecursive(s, k + 1, j);
    if (temp < min)
    {
      min = temp;
    }
  }
  return min;
}
int main()
{
  string s = "nitin"; // output = 0

  int n = s.length();
  cout << PPRecursive(s, 0, n - 1) << endl;
  return 0;
}