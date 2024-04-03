#include<iostream>
using namespace std;

// First and last occurence of an element in a Sorted Array 

int firstOccurence(int arr [] , int key , int n ){
    int start= 0 ; 
    int end= n-1;
    int first= 0;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            first=mid;
            end = mid - 1 ;
        
        }
        else if(arr[mid]>key){
            start= mid + 1;
        }
        else {
            end=mid-1;
        }
    }
    return first;
}

int lastOccurence(int arr [] , int key , int n ){
    int start= 0 ; 
    int end= n-1;
    int ans= 0;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            ans=mid;
        start = mid + 1 ;
        
        }
        else if(arr[mid]>key){
            start= mid + 1;
        }
        else {
            end=mid-1;
        }
    }
    return ans;
}
int main(){

    int arr[5]={1,3,4,4,6};
    cout<<"First occurence is at index "<<firstOccurence(arr,4,5)<<" and the last occurence is at index "<<lastOccurence(arr,4,5);
    
     return 0;
}