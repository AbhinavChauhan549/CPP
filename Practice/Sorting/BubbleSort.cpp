#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 6, 7, 10};

    bool istrue = true;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                istrue = true;
            }
        }
        if (istrue == false)
        {
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}