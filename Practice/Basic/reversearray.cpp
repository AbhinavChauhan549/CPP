#include<iostream>
using namespace std;

void reverse (int arr[], int size){
    int start = 0 ;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printarr(int arr[]  , int size ){
    for(int i =0 ;i<size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n ;
    cin>>n ;
    int arr[100];
    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
    }

    reverse(arr,n);
    printarr(arr, n);
     return 0;
}