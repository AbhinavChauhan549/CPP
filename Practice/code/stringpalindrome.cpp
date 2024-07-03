#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  string st = "sadbas";

  int n = st.length();

  int start = 0, end = n - 1;
  bool isPalindrome = true;

  while (start < end)
  {
    if (st[start] != st[end])
    {
      isPalindrome = false;
    }
    start++;
    end--;
  }
  if (isPalindrome)
  {
    cout << "String is Palindrome ";
  }
  else
  {
    cout << "String is not a Palindrome";
  }

  return 0;
}