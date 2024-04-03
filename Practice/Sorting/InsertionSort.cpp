#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {4, 2, 8, 5, 9, 10};

    // for(int i = 1; i<6; i++){
    //     int temp = arr[i];
    //     int j=i-1;
    //     for(; j>=0;j--){
    //         if(arr[j]>temp){
    //             arr[j+1]=arr[j];
    //         }
    //         else{
    //             break;
    //         }

    //     }
    //      arr[j+1]=temp;
    // }

    int i = 1;
    while (i < 6)
    {

        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                // arr[j]=temp;
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*

isme hum ek ek karke push karege sorted array me

int i =1 ;
while(i<10){
    int temp = arr[i];
    int j=i-1;

    while(j>=0){
        if(arr[j]>temp){
            arr[j+1]=arr[j]
        }
        else{
            break;
        }
        j--;

    }
    arr[j+1]=temp;
    i++;
}
*/