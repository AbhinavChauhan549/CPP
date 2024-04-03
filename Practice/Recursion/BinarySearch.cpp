#include<iostream>
using namespace std;

bool BinarySearch(int *arr , int s , int e , int k ){
           
           if(s>e)
            return false;
           

            int mid = s+(e-s)/2;

            if(arr[mid]==k)
                return true;
            
             if(arr[mid]<k){
                return BinarySearch(arr,mid+1,e,k);
            }
            else{
                 return BinarySearch(arr,s,mid-1,k);
            }
}
int main(){
     int arr[6]={2,4,6,3,5,7};
    int k = 4;

    bool ans = BinarySearch(arr,0,6,k);

    cout<<"Result : "<<ans;
     return 0;
}