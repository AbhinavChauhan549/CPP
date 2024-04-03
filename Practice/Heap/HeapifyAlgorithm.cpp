// the leaf node ka index lies between index(n/2+1) to nth index
// Heapify algo is used to take a node and put it in a right place

// tc : O(logn)
#include <iostream>
using namespace std;

class Heap
{

public:
  int arr[100];
  int size;

  Heap()
  {
    arr[0] = -1;
    size = 0;
  }

  void insert(int val)
  {
    size = size + 1;
    int index = size;
    arr[index] = val;

    while (index > 1)
    {
      int parent = index / 2;

      if (arr[parent] < arr[index])
      {
        swap(arr[parent], arr[index]);
        index = parent;
      }
      else
      {
        return;
      }
    }
  }

  void print()
  {
    for (int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void deletenode()
  {
    if (size == 0)
    {
      cout << "Nothing to delete";
      return;
    }
    // step 1 put last element into begining node
    arr[1] = arr[size];

    // step 2 now remove the last element replace by you
    size--;

    // step 3 take root node to its correct position;

    int i = 1;
    while (i < size)
    {
      int leftindex = 2 * i;
      int rightindex = 2 * i + 1;

      if (leftindex < size && arr[i] < arr[leftindex] && arr[leftindex] > arr[rightindex])
      {
        swap(arr[i], arr[leftindex]);
        i = leftindex;
      }
      else if (rightindex < size && arr[i] < arr[rightindex])
      {
        swap(arr[i], arr[rightindex]);
        i = rightindex;
      }
      else
      {
        return;
      }
    }
  }
};

void heapify(int arr[], int n, int i)
{
  int largestelement = i;
  int leftchild = 2 * i;
  int rightchild = 2 * i + 1;

  if (leftchild < n && arr[leftchild] > arr[largestelement])
  {
    largestelement = leftchild;
  }
  if (rightchild < n && arr[rightchild] > arr[largestelement])
  {
    largestelement = rightchild;
  }

  if (largestelement != i)
  {
    swap(arr[largestelement], arr[i]);
    heapify(arr, n, largestelement);
  }
}

int main()
{

  Heap h;

  h.insert(5);
  h.insert(53);
  h.insert(55);
  h.insert(51);
  h.insert(52);
  h.print();

  h.deletenode();
  h.print();

  int arr[6] = {-1, 54, 53, 55, 52, 50};
  int n = 5;
  for (int i = n / 2; i > 0; i--)
  {
    heapify(arr, n, i);
  }
  cout << "Printing after heapify : " << endl;
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
