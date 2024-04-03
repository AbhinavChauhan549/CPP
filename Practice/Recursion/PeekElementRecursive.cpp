#include<iostream>
using namespace std;

int peekele(int arr[] , int s , int e ){
  
   if(s>=e){
       return arr[e];
   }

 int mid = s+(e-s)/2;

if(arr[mid]<=arr[mid+1]){
    return peekele(arr,mid+1,e);
}
else{
    return peekele(arr,s,mid);
}
}

int main(){
    int arr[6]={2,3,4,7,6,5};
    int size = 6;
    int a = peekele(arr,0,size);

    cout<<"Peek Element is : "<<a <<endl;
     return 0;
}