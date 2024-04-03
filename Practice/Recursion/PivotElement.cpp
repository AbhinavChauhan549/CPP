#include<iostream>
using namespace std;

int pivot(int *arr , int s , int e){

    if(s>=e){
        return s;
    }

    int mid = s+ (e-s)/2;

    if(arr[mid]>=arr[0]){
        return pivot(arr,mid+1,e);
    }
    else{
        return pivot(arr,s ,mid);
    }
}
int main(){
    int arr[10]={6,7,8,9,11,1,2,3,4,5,};
    int size = 10;

    int ans = pivot(arr,0,size-1);
    cout<<"Pivot Element is at index : "<<ans<<endl;
     return 0;
}