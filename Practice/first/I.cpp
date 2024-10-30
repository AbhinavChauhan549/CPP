#include <iostream>
using namespace std;
int main()
{

  int arr[6] = {7, 4, 10, 8, 3, 1};
  int n = 6;
  // Bubble sort

  // Selection Sort

  // first loop is for number of passes
  for (int i = 0; i < n - 1; i++)
  { // there would be 5 passes if there 6 elements in the array

    int minimumElementIndex = i;

    for (int j = i + 1; j < n; j++)
    {

      if (arr[j] < arr[minimumElementIndex])
      {
        minimumElementIndex = j;
      }
    }
    if (minimumElementIndex != i)
    {
      swap(arr[i], arr[minimumElementIndex]);
    }
  }
  cout << "Selection sort : ";
  for (auto element : arr)
  {
    cout << element << " ";
  }

  // merge Sort

  int arr2[6] = {5, 4, 10, 1, 6, 2};

  int n = 6;

  // result

  return 0;
}