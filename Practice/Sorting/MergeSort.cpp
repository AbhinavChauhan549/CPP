#include <iostream>
using namespace std;

// void Merge(int *arr, int s, int e)
// {
//     int mid = s + (e - s) / 2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     int mainIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainIndex++];
//     }

//     mainIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainIndex++];
//     }

//     // Merging the two arrays sortedly

//     int index1 = 0;
//     int index2 = 0;
//     mainIndex = s;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[mainIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[mainIndex++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[mainIndex++] = first[index1++];
//     }

//     while (index2 < len2)
//     {
//         arr[mainIndex++] = second[index2++];
//     }
// }

// void MergeSort(int *arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }

//     int mid = s + (e - s) / 2;
//     // left wale array ke liye
//     MergeSort(arr, s, mid);

//     // Right wale array ke liye

//     MergeSort(arr, mid + 1, e);

//     // Sabhi ko merge karne ke liye
//     Merge(arr, s, e);
// }


//===================================================================================================================================

// Practise 1 

void Merge(int *arr , int s ,int e ){

    int mid = s+(e-s)/2;

    int len1 = mid -s + 1 ; // Left part ki length 

    int len2 = e-mid; // Right part ki length

    int *first = new int [len1]; // left part ke liye dynamic array 
    int *second = new int [len2];// Right part ke liye dynamic array 

    int mainIndex = s ;

    for(int i = 0  ; i<len1 ;i++){ // Left dynamic array me value insert karne ke liye loop 
        first[i]= arr[mainIndex++];
    }

    mainIndex= mid+1;
    for(int i = 0  ; i<len2 ;i++){ // Right dynamic array me value insert karne ke liye loop 
        second[i]= arr[mainIndex++];
    }

    int index1 = 0 ;
    int index2 = 0 ;
     mainIndex = s;

     // ab dono dynamic arrays ki values ko main array me insert karege
    while(index1 < len1 && index2 < len2 ){ // condition when len1 = len2 similar to inter section of two sorted array
            if(first[index1]<second[index2]){
                arr[mainIndex++]=first[index1++];
            }
            else{
                arr[mainIndex++]=second[index2++];
            }
    }

    while(index1 < len1){ // When len1 > len2
         arr[mainIndex++]=first[index1++];
    }

    while(index2 < len2){ // When len1 < len2
         arr[mainIndex++]=second[index2++];
    }
}
void MergeSort (int *arr , int s , int e ){
      // Base Class 
        if(s>=e){
            return ;

        }

        int mid = s+(e-s)/2 ;

        MergeSort(arr,s,mid);// Left Part

        MergeSort(arr,mid+1,e);// For Right Part

        // Function to merge the elements 

        Merge(arr,s,e);
}
//==============================================================================================================================================
int main()
{

    int arr[10] = {6, 3, 7, 4, 5, 8, 1, 2, 9, 11};
    int size = 10;

    MergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}