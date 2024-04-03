#include<iostream>
using namespace std;

void reverseAlt(int arr[], int size){
    for(int i =0 ; i<size ;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArr(int arr[] , int s){
    for(int i =0 ; i<s ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a ;
    cin>>a; 

    int arr[100];
    for(int i =0 ; i<a ;i++){
        cin>>arr[i];
    }
    reverseAlt(arr, a);
    printArr(arr,a);
     return 0;
}