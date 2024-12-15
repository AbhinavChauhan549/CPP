#include <iostream>
#include <algorithm>
using namespace std;

// Bubble sort
// key point : the largest element comes to last position in each pass or iteration
/*
void bubbleSort(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
*/

// Selection Sort
/*
void selectionSort(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    int miniIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[miniIndex])
      {
        miniIndex = j;
      }
    }

    int temp = arr[miniIndex];
    arr[miniIndex] = arr[i];
    arr[i] = temp;
  }
}
*/

// Insertion Sort
void insertionSort(int arr[], int n)
{

  for (int i = 1; i < n; i++)
  {
    int j = i - 1;
    int temp = arr[i];
    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}
int main()
{

  int arr[5] = {3, 2, 5, 1, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  // bubbleSort(arr, n);
  // selectionSort(arr, n);
  insertionSort(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}