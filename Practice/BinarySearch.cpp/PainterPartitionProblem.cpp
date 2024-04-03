#include<iostream>
using namespace std;

bool isPainter(int arr[],int n , int k , int mid){
    int numberPainter= 1;
    int count =0 ;
    for(int i = 0 ; i<n ; i++){
        if(count+arr[i]<=mid){
            count=count+arr[i];
        }
        else{
            numberPainter++;
            if(numberPainter>k || arr[i]>mid){
              return false;
            }
              count= arr[i];
        }
    }
    return true;
}
int main(){
    int arr[4]= {5,5,5,5};
    int n=4;
    int ans;
    
    int k=2 ;
   
    int start =0  ; 
    int sum =0 ;
    for(int i = 0 ; i< 4 ; i++){
        sum+=arr[i];
    }
    int end = sum ; 
    int mid = start + (end-start)/2;
    while(start<=end){
        if(isPainter(arr,4,2,mid)){
            end=mid-1;
            ans = mid;
        }
        else{
            start=mid+1;
        }
        mid= start + (end- start)/2;
    }

    cout<<ans;
     return 0;
}