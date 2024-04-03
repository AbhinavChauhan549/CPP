#include<iostream>
using namespace std;

bool BinarySearch(int *arr , int s ,int e , int key){

    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;

    if(arr[mid]==key){
        return true ;

    }
    else if(arr[mid]<key){
        return BinarySearch(arr,mid+1,e,key);
    }
    else{
         return BinarySearch(arr,s,mid-1,key);
    }
}

bool pivot(int *arr , int s , int e,int key){
    int ans;
    if(s>=e){
        ans = s;

        if(BinarySearch(arr,ans,e,key)){
            return true;
        } 
        else if(BinarySearch(arr,s,ans-1,key)){
            return true;
        }
        else {
            return false;
        }
    }

    int mid = s+ (e-s)/2;

    if(arr[mid]>=arr[0]){
        return pivot(arr,mid+1,e,key);
    }
    else{
        return pivot(arr,s ,mid,key);
    }
}
int main(){
    int arr[10]={6,7,8,9,11,1,2,3,4,5,};
    int size = 10;
    int key = 3;
    bool ans = pivot(arr,0,size-1,key);
    cout<<" Element is Present or not : "<<ans<<endl;
     return 0;
}