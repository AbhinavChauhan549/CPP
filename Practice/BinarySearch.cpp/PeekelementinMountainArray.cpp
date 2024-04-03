#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,5,4};

    int start = 0 ;
    int end = 4;
    int mid = start + (end-start)/2;
    int ans =0 ;
    while(start<end){
        
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
            ans=mid;
        }
        mid=start+(end-start)/2;
    }

    cout<<ans;
     return 0;
}