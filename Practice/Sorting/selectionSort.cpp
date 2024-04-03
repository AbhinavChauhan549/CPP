#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {6, 2, 8, 4, 10};

    for (int i = 0; i < 4; i++)
    {
        int minindex = i; // Here we wil assume first index is minimum index and search for minimum element in unsorted array
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}